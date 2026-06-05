int strStr(char* haystack, char* needle) {
    int i = 0;
    int j = 0;
    size_t stackLen = strlen(haystack);
    size_t needleLen = strlen(needle);

    while (i < stackLen) {
        // If the characters match, check the next character in needle
        if (haystack[i + j] == needle[j++]) {
            // If we have matched the entire needle, return the starting index
            if (j == needleLen) return i;
        }
        // If the characters do not match, reset j and move to the next character in haystack
        else {
            i++;
            j = 0;
        }
    }
    return -1;
}