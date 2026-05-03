int comp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

char findTheDifference(char* s, char* t) {
    // sorting strings for better manipulation
    qsort(s, strlen(s), sizeof(char), comp); 
    qsort(t, strlen(t), sizeof(char), comp);

    char goal;

    // check if first string is empty
    if (strlen(s) == 0) {
        return t[0];
    }

    for (size_t i = 0; i < strlen(t); i++) {
        // check if strings contains same letters
        if (s[i] != t[i]) {
            goal = t[i];
            break;
        }
    }

    return goal;
}