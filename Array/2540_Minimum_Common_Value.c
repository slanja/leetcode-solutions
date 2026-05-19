int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0;
    int j = 0;

    while (i < nums1Size && j < nums2Size) {
        // If nums2[j] is equal to min, return min as the minimum common value
        if (nums1[i] == nums2[j]) return nums1[i];

        // If nums2[j] is less than min, move the pointer j to the right
        else if (nums1[i] < nums2[j]) i++;

        else j++;
    }
    return -1;
}