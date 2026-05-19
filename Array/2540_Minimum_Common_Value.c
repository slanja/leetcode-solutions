int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0;
    int j = 0;

    // Initialize min to the first element of nums1
    int min = nums1[0];

    while (i < nums1Size && j < nums2Size) {
        // If nums2[j] is equal to min, return min as the minimum common value
        if (nums2[j] == min) return min;

        // If nums2[j] is less than min, move the pointer j to the right
        if (nums2[j] < min) j++;

        else {
            ++i;
            // If i is out of bounds, set min to a value that is greater than any element in nums1
            min = i < nums1Size ? nums1[i] : nums1[nums1Size];
        }
    }
    return -1;
}