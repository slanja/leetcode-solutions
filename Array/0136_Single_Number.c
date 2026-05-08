int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int singleNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), comp);

    size_t i = 0;

    while (i < numsSize-1) {
        if (nums[i] == nums[i+1]) i += 2;

        else return nums[i];
    }

    return nums[numsSize-1];
}