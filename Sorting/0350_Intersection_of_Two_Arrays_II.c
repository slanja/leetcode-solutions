int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    // getting max size of result array
    int maxSize = (nums1Size < nums2Size) ? nums1Size : nums2Size;
    int* result = (int*)malloc(maxSize * sizeof(int));

    size_t pos = 0;

    // going through every element and checking if they match
    for (size_t i = 0; i < nums1Size; i++) {
        for (size_t j = 0; j < nums2Size; j++) {
            // if they match, add the number to the results
            if (nums1[i] == nums2[j]) {
                result[pos] = nums1[i];
                // works here but not ideal for real situation :)
                nums2[j] = -1;
                pos++;

                // check if the results are full, if they are return result
                if (pos == maxSize) {
                    *returnSize = pos;
                    return result;
                }

                break;
            }
        }
    }
    
    *returnSize = pos;

    return result;
}