int myAtoi(char* s) {
    int i = 0;
    int result = 0;
    int sign = 1;

    // Skip leading whitespace
    while (s[i] == ' ') i++;

    // Check for optional sign
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    // Process the digits and build the result
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        // Check for overflow and underflow conditions
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            if (sign == 1) return INT_MAX;
            else return INT_MIN;
        }
        
        // Update the result with the new digit
        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}