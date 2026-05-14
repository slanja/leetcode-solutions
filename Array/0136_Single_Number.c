int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int singleNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), comp);

    size_t i = 0;

    while (i < numsSize-1) {
        // If the current element is the same as the next one, skip both
        if (nums[i] == nums[i+1]) i += 2;

        // If not, return the current element as it is the single number
        else return nums[i];
    }
    // If we exit the loop, the single number is the last element in the array
    return nums[numsSize-1];
}