
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

#define wbsort__swap(x, y) do { \
		wbsort_type taa = array[x]; \
		array[x] = array[y]; \
		array[y] = taa; \
	 } while(0)

#define wbsort__sort2(x, y) \
	do if(wbsort_compare(array[x], array[y]) > 0) { \
		wbsort__swap(x, y); \
	} while(0)

#define wbsort__heap_parent(i) (((i) - 1) / 2)
#define wbsort__heap_left_child(i) (2 * (i) + 1)
#define wbsort__heap_right_child(i) (2 * (i) + 2)
#define wbsort__sort3(a, b, c) do { \
	wbsort__sort2(a, b); \
	wbsort__sort2(b, c); \
	wbsort__sort2(a, b); \
} while(0)

#define wbsort__heap_shift_down(start, end) do { \
	isize root = start; \
	isize child = wbsort__heap_left_child(root); \
	while(child <= end) { \
		isize swap = root; \
		if(wbsort_compare(array[swap], array[child]) < 0) { \
			swap = child; \
		} \
		if(child + 1 <= end && wbsort_compare(array[swap], array[child+1]) < 0) { \
			swap = child + 1; \
		} \
		if(swap == root) { \
			return; \
		} else { \
			wbsort__swap(root, swap); \
			root = swap; \
			child = wbsort__heap_left_child(root); \
		} \
	} \
} while(0) 

#define wbsort_CreateSortPrototype(wbsort_type, wbsort_qsort) \
void wbsort_qsort##__internal(wbsort_type* array, isize count, int bad_allowed, int leftmost); \
void wbsort_qsort(wbsort_type* array, isize count)

#define wbsort_CreateSort(wbsort_type, wbsort_compare, wbsort_qsort) \
void wbsort_qsort##__internal(wbsort_type* array, isize count, int bad_allowed, int leftmost) \
{ \
	int time = 0; \
	while(1) { \
		isize end = count; \
		time++; \
		if(count <= wbsort__InsertionSortThreshold) { \
			if(leftmost) { \
				/*wbsort_isort(array, count);*/ \
				for(isize i = 1; i < count; ++i) { \
					isize j = i - 1; \
					/* if they're the same, no point in moving them */ \
					if(wbsort_compare(array[i], array[j]) < 0) { \
						wbsort_type x = array[i]; \
						while((j >= 0) && wbsort_compare(array[j], x) > 0) { \
							array[j + 1] = array[j]; \
							j--; \
						} \
						array[j + 1] = x; \
					} \
				} \
			} else { \
				/*wbsort_isort_noguard(array, count);*/ \
				for(isize i = 1; i < count; ++i) { \
					isize j = i - 1; \
					/* if they're the same, no point in moving them */ \
					if(wbsort_compare(array[i], array[j]) < 0) { \
						wbsort_type x = array[i]; \
						while(wbsort_compare(array[j], x) > 0) { \
							array[j + 1] = array[j]; \
							j--; \
						} \
						array[j + 1] = x; \
					} \
				} \
			} \
			return; \
		} \
 \
		isize s2 = end / 2; \
		if(count > wbsort__NintherThreshold) { \
			wbsort__sort3(0, s2, end - 1); \
			wbsort__sort3(1, s2 - 1, end - 2); \
			wbsort__sort3(2, s2 + 1, end - 3); \
			wbsort__sort3(s2 - 1, s2, s2 + 1); \
			wbsort_type tt = array[0];  \
			array[0] = array[s2];  \
			array[s2] = tt;  \
		} else { \
			wbsort__sort3(s2, 0, end - 1); \
		} \
		 \
		if(!leftmost && wbsort_compare(*(array - 1), array[0]) > 0) { \
			wbsort_type pivot = array[0]; \
			isize first = 1, last = count - 1; \
 \
			while(wbsort_compare(array[last], pivot) > 0) --last; \
 \
			if(last + 1 == count) { \
				while(first < last && wbsort_compare(pivot, array[first]) <= 0) ++first; \
			} else { \
				while(wbsort_compare(pivot, array[first]) <= 0) ++first; \
			} \
 \
			while(first < last) { \
				wbsort_type ttt = array[last]; \
				array[last] = array[first]; \
				array[first] = ttt; \
				while(wbsort_compare(pivot, array[last]) > 0) --last; \
				while(wbsort_compare(pivot, array[first]) <= 0) ++first; \
			} \
 \
			array[0] = array[last]; \
			array[last] = pivot; \
			\
			isize begin = last; \
			array = array + begin; \
			count -= begin; \
			continue;	 \
		} \
		 \
		int already_partitioned = 0; \
		isize pivot_pos = 0; \
		{ \
			wbsort_type pivot = array[0]; \
			isize first = 1, last = count - 1; \
			while(wbsort_compare(array[first], pivot) < 0) ++first; \
 \
			if(first == 1) { \
				while(first < last && (wbsort_compare(array[last], pivot)) > 0) --last; \
			} else { \
				while(wbsort_compare(array[last], pivot) > 0) --last; \
			} \
 \
			int already_partitioned = first >= last; \
 \
			while(first < last) { \
				wbsort_type t = array[last]; \
				array[last] = array[first]; \
				array[first] = t; \
				while(wbsort_compare(array[first], pivot) < 0) ++first; \
				while(wbsort_compare(array[last], pivot) > 0) --last; \
			} \
 \
			array[0] = array[first - 1]; \
			array[first - 1] = pivot; \
 \
			pivot_pos = first - 1; \
		} \
		 \
		isize lsize = pivot_pos; \
		isize rsize = count - (pivot_pos + 1); \
 \
		int highly_unbalanced = lsize < (count >> 3) || rsize < (count >> 3); \
		highly_unbalanced = 0; \
		if(highly_unbalanced) { \
			if(--bad_allowed == 0) { \
				isize start = wbsort__heap_parent(count - 1); \
				while(start >= 0) { \
					wbsort__heap_shift_down(start, count - 1); \
					--start; \
				} \
 \
				isize end = count - 1; \
				while(end > 0) { \
					wbsort__swap(end, 0); \
					--end; \
					wbsort__heap_shift_down(0, end); \
				} \
				return; \
			} \
 \
			if(lsize >= wbsort__InsertionSortThreshold) { \
				isize lsize4 = lsize >> 2; \
				wbsort__swap(0, lsize4); \
				wbsort__swap(pivot_pos - 1, pivot_pos - lsize4); \
 \
				if(lsize > wbsort__NintherThreshold) { \
					wbsort__swap(1, lsize4 + 1); \
					wbsort__swap(2, lsize4 + 2); \
					wbsort__swap(pivot_pos - 2, pivot_pos - (lsize4 + 1)); \
					wbsort__swap(pivot_pos - 3, pivot_pos - (lsize4 + 2)); \
				} \
 \
				if(rsize >= wbsort__InsertionSortThreshold) { \
					isize rsize4 = rsize >> 2; \
					wbsort__swap(pivot_pos + 1, pivot_pos + rsize4 + 1); \
					wbsort__swap(count - 1, end - rsize4); \
 \
					if(rsize > wbsort__NintherThreshold) { \
						wbsort__swap(pivot_pos + 2, pivot_pos + 2 + rsize4); \
						wbsort__swap(pivot_pos + 3, pivot_pos + 3 + rsize4); \
						wbsort__swap(end - 2, end - (1 + rsize4)); \
						wbsort__swap(end - 3, end - (2 + rsize4)); \
					} \
				} \
			} \
		} else { \
			if(already_partitioned) { \
				int okay = 1; \
				{ \
					isize limit = 0; \
					for(isize i = 1; i < count; ++i) { \
						if(limit > wbsort__PartialInsertionSortLimit) { \
							okay = 0; \
							break; \
						} \
						isize j = i - 1; \
						/* if they're the same or ascending, no point in moving them */ \
						if(wbsort_compare(array[i], array[j]) < 0) { \
							wbsort_type x = array[i]; \
							while((j >= 0) && wbsort_compare(array[j], x) > 0) { \
								array[j + 1] = array[j]; \
								j--; \
							} \
							array[j + 1] = x; \
							limit += i - j; \
						} \
					} \
 \
				} \
 \
				if(okay) { \
					{ \
						isize limit = 0; \
						for(isize i = 1; i < count; ++i) { \
							if(limit > wbsort__PartialInsertionSortLimit) { \
								okay = 0; \
								break; \
							} \
							isize j = i - 1; \
							/* if they're the same or ascending, no point in moving them */ \
							if(wbsort_compare(array[i], array[j]) < 0) { \
								wbsort_type x = array[i]; \
								while((j >= 0) && wbsort_compare(array[j], x) > 0) { \
									array[j + 1] = array[j]; \
									j--; \
								} \
								array[j + 1] = x; \
								limit += i - j; \
							} \
						} \
					} \
					if(okay) { \
						return; \
					} \
				} \
			} \
		} \
		wbsort_qsort##__internal(array, pivot_pos, bad_allowed, leftmost); \
		array = array + pivot_pos + 1; \
		count -= pivot_pos + 1;  \
		leftmost = 0; \
	} \
} \
void wbsort_qsort(wbsort_type* array, isize count)  \
{ \
	wbsort_qsort##__internal(array, count, 8, 1); \
}

#if 0
void wbsort_qsort__internal(wbsort_type* array, isize count, int bad_allowed, int leftmost) 
{ 
	int time = 0; 
	while(1) { 
		isize end = count; 
		time++; 
		if(count <= wbsort__InsertionSortThreshold) { 
			if(leftmost) { 
				/*wbsort_isort(array, count);*/ 
				for(isize i = 1; i < count; ++i) { 
					isize j = i - 1; 
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
			} else { 
				/*wbsort_isort_noguard(array, count);*/ 
				for(isize i = 1; i < count; ++i) { 
					isize j = i - 1; 
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
			return; 
		} 
 
		isize s2 = end / 2; 
		if(count > wbsort__NintherThreshold) { 
			wbsort__sort3(0, s2, end - 1); 
			wbsort__sort3(1, s2 - 1, end - 2); 
			wbsort__sort3(2, s2 + 1, end - 3); 
			wbsort__sort3(s2 - 1, s2, s2 + 1); 
			wbsort_type t = array[0];  
			array[0] = array[s2];  
			array[s2] = t;  
		} else { 
			wbsort__sort3(s2, 0, end - 1); 
		} 
		 
		if(!leftmost && wbsort_compare(*(array - 1), array[0]) > 0) { 
			wbsort_type pivot = array[0]; 
			isize first = 1, last = count - 1; 
 
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
			
			isize begin = last; 
			array = array + begin; 
			count -= begin; 
			continue;	 
		} 
		 
		int already_partitioned = 0; 
		isize pivot_pos = 0; 
		{ 
			wbsort_type pivot = array[0]; 
			isize first = 1, last = count - 1; 
			while(wbsort_compare(array[first], pivot) < 0) ++first; 
 
			if(first == 1) { 
				while(first < last && (wbsort_compare(array[last], pivot)) > 0) --last; 
			} else { 
				while(wbsort_compare(array[last], pivot) > 0) --last; 
			} 
 
			int already_partitioned = first >= last; 
 
			while(first < last) { 
				wbsort_type t = array[last]; 
				array[last] = array[first]; 
				array[first] = t; 
				while(wbsort_compare(array[first], pivot) < 0) ++first; 
				while(wbsort_compare(array[last], pivot) > 0) --last; 
			} 
 
			array[0] = array[first - 1]; 
			array[first - 1] = pivot; 
 
			pivot_pos = first - 1; 
		} 
		 
		isize lsize = pivot_pos; 
		isize rsize = count - (pivot_pos + 1); 
 
		int highly_unbalanced = lsize < (count >> 3) || rsize < (count >> 3); 
		highly_unbalanced = 0; 
		if(highly_unbalanced) { 
			if(--bad_allowed == 0) { 
				isize start = wbsort__heap_parent(count - 1); 
				while(start >= 0) { 
					wbsort__heap_shift_down(start, count - 1); 
					--start; 
				} 
 
				isize end = count - 1; 
				while(end > 0) { 
					wbsort__swap(end, 0); 
					--end; 
					wbsort__heap_shift_down(0, end); 
				} 
				return; 
			} 
 
			if(lsize >= wbsort__InsertionSortThreshold) { 
				isize lsize4 = lsize >> 2; 
				wbsort__swap(0, lsize4); 
				wbsort__swap(pivot_pos - 1, pivot_pos - lsize4); 
 
				if(lsize > wbsort__NintherThreshold) { 
					wbsort__swap(1, lsize4 + 1); 
					wbsort__swap(2, lsize4 + 2); 
					wbsort__swap(pivot_pos - 2, pivot_pos - (lsize4 + 1)); 
					wbsort__swap(pivot_pos - 3, pivot_pos - (lsize4 + 2)); 
				} 
 
				if(rsize >= wbsort__InsertionSortThreshold) { 
					isize rsize4 = rsize >> 2; 
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
				int okay = 1; 
				{ 
					isize limit = 0; 
					for(isize i = 1; i < count; ++i) { 
						if(limit > wbsort__PartialInsertionSortLimit) { 
							okay = 0; 
							break; 
						} 
						isize j = i - 1; 
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
 
				} 
 
				if(okay) { 
					{ 
						isize limit = 0; 
						for(isize i = 1; i < count; ++i) { 
							if(limit > wbsort__PartialInsertionSortLimit) { 
								okay = 0; 
								break; 
							} 
							isize j = i - 1; 
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
					} 
					if(okay) { 
						return; 
					} 
				} 
			} 
		} 
		wbsort_qsort##__internal(array, pivot_pos, bad_allowed, leftmost); 
		array = array + pivot_pos + 1; 
		count -= pivot_pos + 1;  
		leftmost = 0; 
	} 
} 
typedef int (*wbsort_comparator)(const void* a, const void* b);
void wbsort_qsort(void* array, isize count, isize elem_size, wbsort_comparator comp)  
{ 
	wbsort_qsort_internal(array, count, elem_size, comp, 8, 1);
}

#endif
