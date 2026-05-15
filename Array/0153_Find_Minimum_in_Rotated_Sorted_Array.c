int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int findMin(int* nums, int numsSize) {
    // sort the array in ascending order using qsort
    qsort(nums, numsSize, sizeof(int), comp);

    // return the first element of the sorted array, which is the minimum element
    return nums[0];
}