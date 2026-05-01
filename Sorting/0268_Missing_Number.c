// unoptimized version
int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int missingNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), comp);
    int next;

    if (numsSize != 1) {
        next = nums[1];

        if (nums[0] != 0) {
            return 0;
        }
    }
    else {
        if (nums[0] == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }

    // checking for missing number in the list
    for (size_t i = 0; i < numsSize; i++) {
        if (i+1 != numsSize) {
            next = nums[i+1];
        }
        
        if (nums[i]+1 != next) {
            return nums[i]+1;
        }
    }
    return 0;
}