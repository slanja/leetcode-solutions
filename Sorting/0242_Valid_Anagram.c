int comp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

bool isAnagram(char* s, char* t) {
    // sorting strings for better manipulation
    qsort(s, strlen(s), sizeof(char), comp); 
    qsort(t, strlen(t), sizeof(char), comp);

    // check if both strings have same size
    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (size_t i = 0; i < strlen(s); i++) {
        // check if strings contains same letters
        if (s[i] != t[i]) {
            return false;
        }
    }
    return true;
}