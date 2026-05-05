bool isMatch(char* s, char* p) {
    size_t i = 0, j = 0;            // i = cursor in text (s), j = cursor in pattern (p)
    size_t star_i = -1;             // position in text when we last saw '*' (-1 = not seen yet)
    size_t star_j = -1;             // position in pattern where last '*' was
                                    
    while (s[i] != '\0') {          // until we've read the entire text
        if (p[j] == '?' || p[j] == s[i]) {
            i++; j++;               // '?' or exact match → advance both cursors
        }

        else if (p[j] == '*') {
            star_j = j;             // remember position of '*' in pattern
            star_i = i;             // remember current possition in text
            j++;                    // '*' consumes 0 characters for now, try to move on
        }

        else if (star_j != -1) {    // mismatch, but we have a fallback '*'
            j = star_j + 1;         // reset j to just after the last '*'
            i = ++star_i;           // let '*' consume one more character than before
        }

        else return false;          // mismatch and no '*' available → no match
    }

    while (p[j] == '*') j++;        // skip any trailing '*' in pattern (e.g. "abc***")
    return p[j] == '\0';            // pattern must also be exhausted, otherwise no match
}