char* int_to_string(int n) {
    int size = snprintf(NULL, 0, "%d", n);
    char* buf = malloc(size + 1);          
    snprintf(buf, size + 1, "%d", n);
    return buf;
}

bool isPalindrome(int x) {
    char* s = int_to_string(x);
    printf("%s\n", s);

    size_t i = 0;
    size_t j = strlen(s)-1;
    
    while (i < strlen(s) && j > 0) {
        if (i == j) break;

        if (s[i] == s[j]) {
            i++, j--;
        }

        else {
            return false;
        }
    }   
    free(s);

    return true;
}