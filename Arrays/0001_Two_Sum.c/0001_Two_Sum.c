// brute force version :)
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));

    // going through every number combination and checking is they add up to target
    for (size_t i = 0; i < numsSize; i++) { 
        for (size_t j = 0; j < numsSize; j++) { 
            if (nums[i] + nums[j] == target && i != j) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return 0;
}