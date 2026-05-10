int getVal(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}

int romanToInt(char* s) {
    int total = 0;

    for (size_t i = 0; s[i] != '\0'; i++) {
        int current = getVal(s[i]);
        int next = getVal(s[i+1]);

        // checking if next number is lower or higher
        if (current < next) total -= current;
        else total += current;
    }
    return total;
}