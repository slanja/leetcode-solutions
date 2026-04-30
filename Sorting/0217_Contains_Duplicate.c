int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

bool containsDuplicate(int* nums, int numsSize) {
    // sorting for easier detection
    qsort(nums, numsSize, sizeof(int), comp);

    for (int i = 0; i < numsSize-1; i++) {
        // checking if next number is duplicate
        if (nums[i] == nums[i+1]) {
            return true;
        }  
    }
    return false;
}