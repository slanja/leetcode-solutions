int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // going backwards and checking if the digit is lower than nine
    for (int i = digitsSize - 1; i >= 0; i--) {
        // if digit is lower than nine we add one and return digits
        if (digits[i] < 9) {
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;
        }
        // if it's nine we set the digit to zero and go on
        else if (digits[i] == 9)  digits[i] = 0;
    }

    // if we went through entire loop we assume that digits is all nines and we need to allocate new array
    *returnSize = digitsSize + 1;
    int* result = malloc(sizeof(int) * (digitsSize + 1));

    result[0] = 1;

    for (size_t j = 1; j < *returnSize; j++) result[j] = 0;

    return result;
}