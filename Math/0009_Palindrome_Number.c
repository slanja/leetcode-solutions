char* int_to_string(int n) {
    int size = snprintf(NULL, 0, "%d", n);
    char* buf = malloc(size + 1);          
    snprintf(buf, size + 1, "%d", n);
    return buf;
}

bool isPalindrome(int x) {
    char* s = int_to_string(x);

    size_t len = strlen(s);
    size_t i = 0;
    size_t j = len-1;
    
    while (i < j) {
        if (s[i] == s[j]) {
            i++, j--;
        }

        else {
            free(s);
            return false;
        }
    }   
    free(s);
    return true;
}