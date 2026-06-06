int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* leftSum = malloc(sizeof(int) * numsSize);
    int* rightSum = malloc(sizeof(int) * numsSize);

    leftSum[0] = 0;
    rightSum[numsSize - 1] = 0;

    int* answer = malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;

    // calculating left and right sums
    for (size_t i = 1; i < numsSize; i++) 
        leftSum[i] = leftSum[i - 1] + nums[i - 1];
    
    for (int j = numsSize - 2; j >= 0; j--) 
        rightSum[j] = rightSum[j + 1] + nums[j + 1];
    
    // calculating the answer
    for (size_t k = 0; k < numsSize; k++) 
        answer[k] = abs(leftSum[k] - rightSum[k]);
    
    return answer;
}