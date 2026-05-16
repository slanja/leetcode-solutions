int findMin(int* nums, int numsSize) {
    int i = 0;          // variable to iterate through the array
    int min = nums[0];  // variable to store the minimum element

    // iterate through the array to find the minimum element
    while (i < numsSize) {
        // update the minimum element if the current element is smaller
        if (nums[i] < min) min = nums[i];
        i++;
    }
    return min;
}