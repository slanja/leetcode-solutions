void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    // Start from the back to avoid overwriting numbers we still need
    int i = m - 1;     // Last number in nums1
    int j = n - 1;     // Last number in nums2
    int k = m + n - 1; // Last empty slot in nums1

    // Compare numbers from both arrays and pick the larger one
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i]; // Put larger number at the end
            i--; // Move to the next number in nums1
        } else {
            nums1[k] = nums2[j]; // Put larger number at the end
            j--; // Move to the next number in nums2
        }
        k--; // Move to the next empty slot from the back
    }

    // If there are still numbers left in nums2, copy them
    // (If numbers are left in nums1, they are already where they should be)
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}