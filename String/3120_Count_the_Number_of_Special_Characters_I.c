int comp(const void *a, const void *b) {
    char ca = *(const char *)a;
    char cb = *(const char *)b;

    // Calculate a rank for each character: 'a' and 'A' both get 0, 'b' and 'B' both get 2, etc.
    int ra = (tolower(ca) - 'a') * 2 + (islower(ca) ? 1 : 0);
    int rb = (tolower(cb) - 'a') * 2 + (islower(cb) ? 1 : 0);

    return ra - rb;
}

int numberOfSpecialChars(char *word) {
    size_t len = strlen(word);
    qsort(word, len, sizeof(char), comp);

    int special = 0;

    // Check for pairs of uppercase and lowercase letters that are the same character
    for (size_t i = 0; i + 1 < len; i++) {
        if (isupper(word[i])
         && islower(word[i + 1])
         && tolower(word[i]) == word[i + 1]) {
            special++;
        }
    }
    return special;
}