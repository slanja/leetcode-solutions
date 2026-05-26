int comp(const void *a, const void *b) {
    char ca = *(const char *)a;
    char cb = *(const char *)b;

    // Calculate the rank of characters, treating uppercase and lowercase letters as special characters
    int ra = (tolower(ca) - 'a') * 2 + (islower(ca) ? 1 : 0);
    int rb = (tolower(cb) - 'a') * 2 + (islower(cb) ? 1 : 0);

    return ra - rb;
}

int numberOfSpecialChars(char* word) {
    qsort(word, strlen(word), sizeof(char), comp); 

    size_t i = 0;
    size_t j = 1;
    int special = 0;

    while (j < strlen(word)) {
        // Check if the current character is an uppercase letter and the next character is a lowercase letter, and they are the same letter ignoring case
        if (isupper(word[i]) && islower(word[j]) && tolower(word[i]) == tolower(word[j])) {
            special++;
        }
        i++;
        j++;
    }
    return special;
}