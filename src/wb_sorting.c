
#define GenerateQuicksortForType(func_name, T, Member_Macro) \
void func_name(T* array, isize count) \
{ \
	if(count > 1) { \
		T tmp = array[0]; \
		array[0] = array[count / 2]; \
		array[count / 2] = tmp; \
		isize pivot = 0; \
		for(isize i = 1; i < count; ++i) { \
			if(Member_Macro(array[i]) < Member_Macro(array[0])) { \
				tmp = array[++pivot]; \
				array[pivot] = array[i]; \
				array[i] = tmp; \
			} \
		} \
		tmp = array[0]; \
		array[0] = array[pivot]; \
		array[pivot] = tmp; \
		func_name(array, pivot); \
		func_name(array + pivot + 1, count - (pivot + 1)); \
	} \
}

#define GenerateInsertionSortForType(func_name, T, Member_Macro) \
void func_name(T* array, isize count) \
{ \
	for(isize i = 1; i < count; ++i) { \
		T x = array[i]; \
		isize j = i - 1; \
		while((j >= 0) && (Member_Macro(array[j]) > Member_Macro(x))) { \
			array[j + 1] = array[j]; \
			j--; \
		} \
		array[j+1] = x; \
	} \
}

#define GenerateIntrosortForType(func_name, T, Cutoff, Member_Macro) \
void func_name(T* array, isize count) \
{ \
	if(count > 1) \
	if(count > Cutoff) { \
		T tmp = array[0]; \
		array[0] = array[count / 2]; \
		array[count / 2] = tmp; \
		isize pivot = 0; \
		for(isize i = 1; i < count; ++i) { \
			if(Member_Macro(array[i]) < Member_Macro(array[0])) { \
				tmp = array[++pivot]; \
				array[pivot] = array[i]; \
				array[i] = tmp; \
			} \
		} \
		tmp = array[0]; \
		array[0] = array[pivot]; \
		array[pivot] = tmp; \
		func_name(array, pivot); \
		func_name(array + pivot + 1, count - (pivot + 1)); \
	} else for(isize i = 1; i < count; ++i) { \
		T x = array[i]; \
		isize j = i - 1; \
		while((j >= 0) && (Member_Macro(array[j]) > Member_Macro(x))) { \
			array[j + 1] = array[j]; \
			j--; \
		} \
		array[j+1] = x; \
	} \
}

#define GenerateBinarySearchForType(func_name, T, K, Member_Key_Macro) \
isize func_name(K key, T* array, isize count) \
{ \
	if(count == 0) return -1; \
	isize min = 0, max = count - 1, mid = 0; \
	K localkey; \
	while(min <= max) { \
		mid = (min + max) / 2; \
		localkey = Member_Key_Macro(array[mid]); \
		if(localkey == key) { \
			return mid; \
		} else if(localkey < key) { \
			min = mid + 1; \
		} else { \
			max = mid - 1; \
		} \
	} \
	return -1; \
} 
 

