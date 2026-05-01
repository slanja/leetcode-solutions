int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    // getting max size of result array
    int maxSize = (nums1Size < nums2Size) ? nums1Size : nums2Size;
    int* result = (int*)malloc(maxSize * sizeof(int));

    size_t pos = 0;

    // going through every element and checking if they match
    for (size_t i = 0; i < nums1Size; i++) {
        for (size_t j = 0; j < nums2Size; j++) {
            // if they match we check for duplicate in result array
            if (nums1[i] == nums2[j]) {
                bool isDuplicate = 0;

                for (size_t k = 0; k < pos; k++) {
                    if (result[k] == nums1[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }

                // if match is not in results we add it there
                if (!isDuplicate) {
                    result[pos] = nums1[i];
                    pos++; 
                }

                break;
            }
        }
    }
    
    *returnSize = pos;

    return result;
}