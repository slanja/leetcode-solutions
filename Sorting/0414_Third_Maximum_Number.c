int comp(const void *a, const void *b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    if (arg1 < arg2) return 1;
    if (arg1 > arg2) return -1;
    return 0;
}

int thirdMax(int* nums, int numsSize) {
    // sorting from highest to lowest for better manipulation
    qsort(nums, numsSize, sizeof(nums[0]), comp);

    int max = 1;  
    int next;        
    long result;            
    int highest = nums[0];

    // handling single number case
    if (numsSize == 1) return highest;

    for (size_t i = 0; i < numsSize; i++) {
        // handling overflow case
        if (i+1 != numsSize) next = nums[i+1];

        // checking if next number is lower
        if (nums[i] > next && max < 3) {
            result = nums[i+1];
            max++;
        }
    }

    // third distinct maximum does not exist
    if (max < 3) {
        return highest;
    }

    return result;    
}