int minElement(int* nums, int numsSize) {
    int sum;
    int min = INT_MAX;

    for (size_t i = 0; i < numsSize; i++) {
        // Convert the integer to a string to easily access each digit
        char str[20]; 
        sprintf(str, "%d", nums[i]);

        sum = 0;

        // Calculate the sum of the digits
        for (size_t j = 0; j < strlen(str); j++) {
            sum += str[j] - '0';
        }

        // Update the minimum sum if the current sum is smaller
        if (sum < min) min = sum;
    }
    return min;
}