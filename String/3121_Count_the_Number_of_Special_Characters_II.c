int numberOfSpecialChars(char* word) {
    // Initialize two arrays to keep track of the last occurrence of lowercase letters and the first occurrence of uppercase letters
    int lastLower[26];
    int firstUpper[26];

    // Initialize lastLower and firstUpper arrays to -1 to indicate that we haven't seen any characters yet
    memset(lastLower, -1, sizeof(lastLower));
    memset(firstUpper, -1, sizeof(firstUpper));

    int special = 0;
    size_t len = strlen(word);

    // Iterate through the word to fill in lastLower and firstUpper arrays
    for (size_t i = 0; i < len; i++) {
        if (islower(word[i])) lastLower[word[i] - 'a'] = i;
        // If we see an uppercase character and we haven't recorded its first occurrence yet, record it
        else if (isupper(word[i]) && firstUpper[(word[i] - 'A')] == -1) firstUpper[(word[i] - 'A')] = i;
    }

    // Check for each character if there is a lowercase character that appears before the first uppercase character
    for (size_t i = 0; i < 26; i++) {
        if ((lastLower[i] != -1 && firstUpper[i] != -1) && lastLower[i] < firstUpper[i]) special++;
    }
    return special;
}