int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

bool isGood(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), comp);

    size_t i = 0;
    int prev = 0;

    if (numsSize == 1) return false;

    while (i < numsSize) {
        if (i >= numsSize - 2 && nums[i] == numsSize - 1) i++;

        else if (nums[i] == prev + 1) {
            prev = nums[i];
            i++;
        }

        else return false;
    }
    return true;
}