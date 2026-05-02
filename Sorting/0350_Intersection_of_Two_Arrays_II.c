int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1, nums1Size, sizeof(int), comp);
    qsort(nums2, nums2Size, sizeof(int), comp);
    
    // getting max size of result array
    int maxSize = (nums1Size < nums2Size) ? nums1Size : nums2Size;
    int* result = (int*)malloc(maxSize * sizeof(int));

    size_t pos = 0;
    size_t i = 0;
    size_t j = 0;

    while (i < nums1Size && j < nums2Size) {
        // if they match, add the number to the results
        if (nums1[i] == nums2[j]) {
            // check if the results are full, if so, return the result
            if (pos == maxSize) {
                *returnSize = pos;
                return result;
            }

            // write down the result of the comparison and increment all iterators
            result[pos] = nums1[i];
            pos++; i++; j++;
        }

        else if (nums1[i] < nums2[j]) {
            i++;
        }

        else if (nums1[i] > nums2[j]) {
            j++;
        }        
    }
    *returnSize = pos;
    return result;
}