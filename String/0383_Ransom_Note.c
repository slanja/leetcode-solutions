int comp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

bool canConstruct(char* ransomNote, char* magazine) {
    size_t lenRansom = strlen(ransomNote);
    size_t lenMagazine = strlen(magazine);

    // sorting strings for better manipulation
    qsort(ransomNote, strlen(ransomNote), sizeof(char), comp);
    qsort(magazine, strlen(magazine), sizeof(char), comp);

    size_t i = 0;
    size_t j = 0;

    // check if ransomNote can be constructed from magazine
    while (i < lenRansom && j < lenMagazine) {
        if (ransomNote[i] == magazine[j]) i++, j++;
        else j++;
    }
    // if i is equal to lenRansom, it means that all characters of ransomNote are found in magazine
    return i == lenRansom;
}