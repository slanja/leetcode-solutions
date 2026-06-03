int lengthOfLastWord(char* s) {
    int len = 0;
    bool letterAppeared = false;

    // Iterate backwards through the string to find the last word
    for (int i = strlen(s) - 1; i >= 0; i--) {
        // If the current character is not a space, it is part of the last word
        if (s[i] != ' ') {
            letterAppeared = true;
            len++;
        }
        // If we encounter a space after we've started counting letters, we can stop
        if (s[i] == ' ' && letterAppeared == true) break;
    }

    return len;
}