int maxRotateFunction(int* nums, int numsSize) {
    if (numsSize <= 1) return 0;

    long long sum = 0;
    long long currentF = 0;

    // Calculate the sum of the array and the initial F(0)
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        currentF += i * nums[i];
    }

    long long maxF = currentF;

    // Calculate F(k) for k = 1 to n-1 using the relation F(k) = F(k-1) + sum - n * nums[n-k]
    for (int i = 1; i < numsSize; i++) {
        currentF = currentF + sum - numsSize * nums[numsSize - i];

        if (currentF > maxF) maxF = currentF;
    }
    return maxF;
}