

//ideas: kv-sort: sort two arrays based on one
// possible problems: might explode the cache because reasons?

/* Partitions below InsertionSortThreshold are sorted with an insertion sort */
#define wbsort__InsertionSortThreshold 24
/* Partitions above this size use Tukey's nither to select the pivot */
#define wbsort__NintherThreshold 128
/* When we detect an aldready sorted partition, attempt an insertion sort
 * that allows this many moves before giving up */
#define wbsort__PartialInsertionSortLimit 8
/* Must be a multiple of 8 due to loop unrolling and < 256 to fit in unsigned char */
#define wbsort__BlockSize 64
/* Size of your cachelines, assumes power of two */
#define wbsort__CachelineSize 64

typedef uint8_t u8;
typedef uint64_t wbsort_usize;
typedef ptrdiff_t wbsort_size;
typedef int wbsort_type;

/* Comparison functions are designed for ascending order
 *	(small to big) 0, 1, 2, 3, 4
 *
 * return negative if a < b
 *		"b is bigger than a"
 * return 0 if a == b
 * return positive if a > b
 * 		"a is bigger than b"
 *
 * if(compare(a, b) > 0) //elements aren't in ascending order 
 */

int wbsort_pcompare(const wbsort_type* a, const wbsort_type* b)
{
	return *a - *b;
}

int wbsort_compare(wbsort_type a, wbsort_type b)
{
	return a - b;
}


#define wbsort__swap(x, y) do { \
		wbsort_type t = array[x]; \
		array[x] = array[y]; \
		array[y] = t; \
	 } while(0)

#define wbsort_sort2(x, y) \
	do if(wbsort_compare(array[x], array[y]) > 0) { \
		wbsort__swap(x, y); \
	} while(0)

#define wbsort__heap_parent(i) (((i) - 1) / 2)
#define wbsort__heap_left_child(i) (2 * (i) + 1)
#define wbsort__heap_right_child(i) (2 * (i) + 2)
#define wbsort__sort3(a, b) do { \
	wbsort__sort2(a, b); \
	wbsort__sort2(b, c); \
	wbsort__sort2(a, b); \
} while(0)


void wbsort_sort3(wbsort_type* array, wbsort_size a, wbsort_size b, wbsort_size c)
{
	wbsort_sort2(a, b);
	wbsort_sort2(b, c);
	wbsort_sort2(a, b);
}



void wbsort_heap_shift_down(wbsort_type* array, wbsort_size start, wbsort_size end)
{
	wbsort_size root = start;
	wbsort_size child = wbsort__heap_left_child(root);
	while(child <= end) {
		wbsort_size swap = root;
		if(wbsort_compare(array[swap], array[child]) < 0) {
			swap = child;
		}

		if(child + 1 <= end && wbsort_compare(array[swap], array[child+1]) < 0) {
			swap = child + 1;
		}

		if(swap == root) {
			return;
		} else {
			wbsort__swap(root, swap);
			root = swap;
			child = wbsort__heap_left_child(root);
		}
	}
}

void wbsort_hsort(wbsort_type* array, wbsort_size count)
{
	wbsort_size start = wbsort__heap_parent(count - 1);
	while(start >= 0) {
		wbsort_heap_shift_down(array, start, count - 1);
		--start;
	}

	wbsort_size end = count - 1;
	while(end > 0) {
		wbsort__swap(end, 0);
		--end;
		wbsort_heap_shift_down(array, 0, end);
	}
}

void wbsort_isort(wbsort_type* array, wbsort_size count)
{
	for(wbsort_size i = 1; i < count; ++i) {
		wbsort_size j = i - 1;
		/* if they're the same, no point in moving them */
		if(wbsort_pcompare(array + i, array + j) < 0) {
			wbsort_type x = array[i];
			while((j >= 0) && wbsort_compare(array[j], x) > 0) {
				array[j + 1] = array[j];
				j--;
			}
			array[j + 1] = x;
		}
	}
}

// Assumes the element before the pointer is less than anything in the array
void wbsort_isort_noguard(wbsort_type* array, wbsort_size count)
{
	for(wbsort_size i = 1; i < count; ++i) {
		wbsort_size j = i - 1;
		/* if they're the same, no point in moving them */
		if(wbsort_compare(array[i], array[j]) < 0) {
			wbsort_type x = array[i];
			while(wbsort_compare(array[j], x) > 0) {
				array[j + 1] = array[j];
				j--;
			}
			array[j + 1] = x;
		}
	}
}

int wbsort_isort_partial(wbsort_type* array, wbsort_size count)
{
	wbsort_size limit = 0;
	for(wbsort_size i = 1; i < count; ++i) {
		if(limit > wbsort__PartialInsertionSortLimit) return 0;
		wbsort_size j = i - 1;
		/* if they're the same or ascending, no point in moving them */
		if(wbsort_compare(array[i], array[j]) < 0) {
			wbsort_type x = array[i];
			while((j >= 0) && wbsort_compare(array[j], x) > 0) {
				array[j + 1] = array[j];
				j--;
			}
			array[j + 1] = x;
			limit += i - j;
		}
	}

	return 1;
}

u8* wbsort_align_to_cacheline(u8* p)
{
	wbsort_usize ip = (wbsort_usize)p;
	ip = (ip + wbsort__CachelineSize - 1) & -wbsort__CachelineSize;
	return (u8*)ip;
}

void wbsort_swap_offsets(wbsort_type* array, wbsort_size count, u8* offsets_l, u8* offsets_r, int num, int use_swaps)
{
	wbsort_size first = 0;
	wbsort_size last = count - 1;
	if(use_swaps) {
		for(wbsort_size i = 0; i < num; ++i) {
			wbsort__swap(first + offsets_l[i], last - offsets_r[i]);
		}
	} else if(num > 0) {
		wbsort_size l = first + offsets_l[0]; 
		wbsort_size r = last - offsets_r[0];
		wbsort_type t = array[l];
		array[l] = array[r];
		for(wbsort_size i = 1; i < num; ++i) {
			l = first + offsets_l[i]; 
			array[r] = array[l];
			r = last - offsets_r[i];
			array[l] = array[r];
		}
		array[r] = t;
	}
}

//so, uh, this is borked
wbsort_size wbsort_partition_right_branchless(wbsort_type* array, wbsort_size count, int* already_partitioned_in)
{
	wbsort_type pivot = array[0];
	wbsort_size first = 1, last = count - 1;
	while(wbsort_compare(array[first], pivot) < 0) ++first;

	if(first == 1) {
		while(first < last && (wbsort_compare(array[last], pivot)) > 0) --last;
	} else {
		while(wbsort_compare(array[last], pivot) > 0) --last;
	}

	int already_partitioned = first >= last;
	if(already_partitioned_in) {
		*already_partitioned_in = already_partitioned;
	}

	if(!already_partitioned) {
		wbsort__swap(first, last);
		++first;
	}

	u8 offsets_l_storage[wbsort__BlockSize + wbsort__CachelineSize];
	u8 offsets_r_storage[wbsort__BlockSize + wbsort__CachelineSize];
	u8* offsets_l = wbsort_align_to_cacheline(offsets_l_storage);
	u8* offsets_r = wbsort_align_to_cacheline(offsets_r_storage);
	int num_l = 0, num_r = 0, start_l = 0, start_r = 0;

	while(last - first > 2 * wbsort__BlockSize) {
		if (num_l == 0) {
			start_l = 0;
			wbsort_size it = first;
			for (u8 i = 0; i < wbsort__BlockSize;) { //should probably use isize?
				offsets_l[num_l] = i++; num_l += (wbsort_compare(array[it], pivot) > 0); ++it;
				offsets_l[num_l] = i++; num_l += (wbsort_compare(array[it], pivot) > 0); ++it;
				offsets_l[num_l] = i++; num_l += (wbsort_compare(array[it], pivot) > 0); ++it;
				offsets_l[num_l] = i++; num_l += (wbsort_compare(array[it], pivot) > 0); ++it;
				offsets_l[num_l] = i++; num_l += (wbsort_compare(array[it], pivot) > 0); ++it;
				offsets_l[num_l] = i++; num_l += (wbsort_compare(array[it], pivot) > 0); ++it;
				offsets_l[num_l] = i++; num_l += (wbsort_compare(array[it], pivot) > 0); ++it;
				offsets_l[num_l] = i++; num_l += (wbsort_compare(array[it], pivot) > 0); ++it;
			}
		}
		if (num_r == 0) {
			start_r = 0;
			wbsort_size it = last;
			for (u8 i = 0; i < wbsort__BlockSize;) {
				offsets_r[num_r] = ++i; num_r += (wbsort_compare(array[--it], pivot) < 0);
				offsets_r[num_r] = ++i; num_r += (wbsort_compare(array[--it], pivot) < 0);
				offsets_r[num_r] = ++i; num_r += (wbsort_compare(array[--it], pivot) < 0);
				offsets_r[num_r] = ++i; num_r += (wbsort_compare(array[--it], pivot) < 0);
				offsets_r[num_r] = ++i; num_r += (wbsort_compare(array[--it], pivot) < 0);
				offsets_r[num_r] = ++i; num_r += (wbsort_compare(array[--it], pivot) < 0);
				offsets_r[num_r] = ++i; num_r += (wbsort_compare(array[--it], pivot) < 0);
				offsets_r[num_r] = ++i; num_r += (wbsort_compare(array[--it], pivot) < 0);
			}
		}

		int num = num_l < num_r ? num_l : num_r;
		wbsort_swap_offsets(array + first, last + 1 - first, offsets_l + start_l, offsets_r + start_r, num, num_l == num_r);
		num_l -= num; num_r -= num;
		start_l += num; start_r += num;
		if(num_l == 0) {
			first += wbsort__BlockSize;
		}
		if(num_r == 0) {
			last -= wbsort__BlockSize;
		}
	}
	wbsort_size l_size = 0, r_size = 0;
	wbsort_size unknown_left = (last - first) - ((num_r || num_l) ? wbsort__BlockSize : 0);
	if(num_r) {
		l_size = unknown_left;
		r_size = wbsort__BlockSize;
	} else if(num_l) {
		l_size = wbsort__BlockSize;
		r_size = unknown_left;
	} else {
		// No leftover block, split the unknown elements in two blocks.
		l_size = unknown_left/2;
		r_size = unknown_left - l_size;
	}

	// Fill offset buffers if needed.
	if (unknown_left && !num_l) {
		start_l = 0;
		wbsort_size it = first;
		for (u8 i = 0; i < l_size;) {
			offsets_l[num_l] = i++;
			num_l += (wbsort_compare(array[it], pivot) > 0); 
			++it;
		}
	}

	if (unknown_left && !num_r) {
		start_r = 0;
		wbsort_size it = last;
		for (u8 i = 0; i < r_size;) {
			offsets_r[num_r] = ++i; 
			num_r += wbsort_compare(array[--it], pivot) < 0;
		}
	}
	
	int num = num_l < num_r ? num_l : num_r;
	wbsort_swap_offsets(array + first, last + 1 - first, offsets_l + start_l, offsets_r + start_r, num, num_l == num_r);
	num_l -= num; num_r -= num;
	start_l += num; start_r += num;
	if(num_l == 0) {
		first += l_size;
	}
	if(num_r == 0) {
		last -= r_size;
	}

	if (num_l) {
		offsets_l += start_l;
		while (num_l--) wbsort__swap(first + offsets_l[num_l], --last);
		first = last;
	}
	if (num_r) {
		offsets_r += start_r;
		while (num_r--)  {
			wbsort__swap(last - offsets_r[num_r], first); 
			++first;
		}
		last = first;
	}

	
	array[0] = array[first - 1];
	array[first - 1] = pivot;

	return first - 1;
}

wbsort_size wbsort_partition_right(wbsort_type* array, wbsort_size count, int* already_partitioned_in)
{
	wbsort_type pivot = array[0];
	wbsort_size first = 1, last = count - 1;
	while(wbsort_compare(array[first], pivot) < 0) ++first;

	if(first == 1) {
		while(first < last && (wbsort_compare(array[last], pivot)) > 0) --last;
	} else {
		while(wbsort_compare(array[last], pivot) > 0) --last;
	}

	int already_partitioned = first >= last;
	if(already_partitioned_in) {
		*already_partitioned_in = already_partitioned;
	}

	while(first < last) {
		wbsort_type t = array[last];
		array[last] = array[first];
		array[first] = t;
		while(wbsort_compare(array[first], pivot) < 0) ++first;
		while(wbsort_compare(array[last], pivot) > 0) --last;
	}

	array[0] = array[first - 1];
	array[first - 1] = pivot;

	return first - 1;
}

wbsort_size wbsort_partition_left(wbsort_type* array, wbsort_size count)
{
	wbsort_type pivot = array[0];
	wbsort_size first = 1, last = count - 1;

	while(wbsort_compare(array[last], pivot) > 0) --last;

	if(last + 1 == count) {
		while(first < last && wbsort_compare(pivot, array[first]) <= 0) ++first;
	} else {
		while(wbsort_compare(pivot, array[first]) <= 0) ++first;
	}

	while(first < last) {
		wbsort_type t = array[last];
		array[last] = array[first];
		array[first] = t;
		while(wbsort_compare(pivot, array[last]) > 0) --last;
		while(wbsort_compare(pivot, array[first]) <= 0) ++first;
	}

	array[0] = array[last];
	array[last] = pivot;
	return last;
}

int* global_array;
void wbsort_qsort_internal(wbsort_type* array, wbsort_size count, int bad_allowed, int leftmost)
{
	int time = 0;
	while(1) {
		wbsort_size end = count;
		time++;
		if(count <= wbsort__InsertionSortThreshold) {
			if(leftmost) {
				wbsort_isort(array, count);
			} else {
				wbsort_isort_noguard(array, count);
			}
			return;
		}

		wbsort_size s2 = end / 2;
		if(count > wbsort__NintherThreshold) {
			wbsort_sort3(array, 0, s2, end - 1);
			wbsort_sort3(array, 1, s2 - 1, end - 2);
			wbsort_sort3(array, 2, s2 + 1, end - 3);
			wbsort_sort3(array, s2 - 1, s2, s2 + 1);
			wbsort_type t = array[0]; 
			array[0] = array[s2]; 
			array[s2] = t; 
		} else {
			wbsort_sort3(array, s2, 0, end - 1);
		}
		
		if(!leftmost && wbsort_compare(*(array - 1), array[0]) > 0) {
			wbsort_size begin = wbsort_partition_left(array, count) + 1;
			array = array + begin;
			count -= begin;
			continue;	
		}
		
		int already_partitioned = 0;
		wbsort_size pivot_pos = wbsort_partition_right_branchless(array, count, &already_partitioned);
		
		wbsort_size lsize = pivot_pos;
		wbsort_size rsize = count - (pivot_pos + 1);

		int highly_unbalanced = lsize < (count >> 3) || rsize < (count >> 3);
		highly_unbalanced = 0;
		if(highly_unbalanced) {
			if(--bad_allowed == 0) {
				wbsort_hsort(array, count);
				return;
			}
			
			if(lsize >= wbsort__InsertionSortThreshold) {
				wbsort_size lsize4 = lsize >> 2;
				wbsort__swap(0, lsize4);
				wbsort__swap(pivot_pos - 1, pivot_pos - lsize4);

				if(lsize > wbsort__NintherThreshold) {
					wbsort__swap(1, lsize4 + 1);
					wbsort__swap(2, lsize4 + 2);
					wbsort__swap(pivot_pos - 2, pivot_pos - (lsize4 + 1));
					wbsort__swap(pivot_pos - 3, pivot_pos - (lsize4 + 2));
				}

				if(rsize >= wbsort__InsertionSortThreshold) {
					wbsort_size rsize4 = rsize >> 2;
					wbsort__swap(pivot_pos + 1, pivot_pos + rsize4 + 1);
					wbsort__swap(count - 1, end - rsize4);

					if(rsize > wbsort__NintherThreshold) {
						wbsort__swap(pivot_pos + 2, pivot_pos + 2 + rsize4);
						wbsort__swap(pivot_pos + 3, pivot_pos + 3 + rsize4);
						wbsort__swap(end - 2, end - (1 + rsize4));
						wbsort__swap(end - 3, end - (2 + rsize4));
					}
				}
			}
		} else {
			if(already_partitioned) {
				if(wbsort_isort_partial(array, pivot_pos)) {
					if(wbsort_isort_partial(array + pivot_pos + 1, count - (pivot_pos + 1))) {
						return;
					}
				}
			}
		}
		wbsort_qsort_internal(array, pivot_pos, bad_allowed, leftmost);
		array = array + pivot_pos + 1;
		count -= pivot_pos + 1; 
		leftmost = 0;
	}
}


void wbsort_pdqsort(wbsort_type* array, wbsort_size count)
{

}

int intcmp(const void* a, const void* b)
{
	const int x = *(const int*)a;
	const int y = *(const int*)b;
	return x - y;	
}


void shuffle(int* array, int count)
{
	int a = rand() % count;
	int b = rand() % count;
	wbsort__swap(a, b);
}


int main(int argc, char** argv)
{
	//__debugbreak();
	srand(100);
	int size = argc >= 2 ? atoi(argv[1]) : 100;
	int* list1 = malloc(sizeof(int) * size * 2);
	int* list2 = malloc(sizeof(int) * size * 2);
	global_array = list2;
	for(int i = 0; i < size; ++i) {
		list1[i] = size - i;
	}
	
#if 1
	for(int i = 0; i < 2 * size; ++i) {
		shuffle(list1, size);
	}
#endif

	printf("\n");
	for(int i = 0; i < size * 2; ++i) {
		list2[i] = -1;
	}
	list2 += size / 2;
	memcpy(list2, list1, sizeof(int) * size);

	int szroot = (int)sqrt(size);
	for(int i = 0; i < size; ++i) {
		printf("%d ", list2[i]);
		if((i + 1) % szroot == 0) {
			printf("\n");
		}
	}
	printf("\n");
	printf("\n");

	qsort(list1, size, sizeof(int), &intcmp);
	wbsort_qsort_internal(list2, size, 8, 1);
	//wbsort_hsort(list2, size);

	int same = 1;
	for(int i = 0; i < size; ++i) {
		printf("%d ", list2[i]);
		if((i+1) % szroot == 0) {
			printf("\n");
		}
		if(list1[i] != list2[i]) {
			same = 0;
		}
	}
	printf("\n");

	printf("Arrays were %s\n", same ? "the same" : "different");

	return 0;
}


