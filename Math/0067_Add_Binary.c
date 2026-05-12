char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;

    // Result can be 1 longer than longest string + 1 for '\0'
    int maxLen = (i > j ? i : j) + 2;
    char* result = malloc(maxLen + 1);
    result[maxLen] = '\0';
    int k = maxLen - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0'; // Converting ASCII to int
        if (j >= 0) sum += b[j--] - '0';

        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }   
    return &result[k + 1];
}