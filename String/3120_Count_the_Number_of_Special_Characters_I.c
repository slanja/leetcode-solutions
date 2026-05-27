int numberOfSpecialChars(char* word) {
    // A character is special if both its lowercase and uppercase forms appear in word.
    bool lower[26];
    bool upper[26];

    int special = 0;
    size_t len = strlen(word);

    // Check if the character is a lowercase letter or an uppercase letter and mark it in the respective array
    for (size_t i = 0; i < len; i++) {
        if (islower(word[i])) lower[word[i] - 'a'] = true;
        else if (isupper(word[i])) upper[(word[i] - 'A')] = true;
    }

    // Count the number of special characters by checking if both lowercase and uppercase forms are present
    for (size_t i = 0; i < 26; i++) {
        if (lower[i] && upper[i]) special++;
    }
    return special;
}