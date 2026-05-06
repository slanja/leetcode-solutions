int comp(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    // Sort greed factors and cookie sizes to enable greedy matching
    qsort(g, gSize, sizeof(int), comp);
    qsort(s, sSize, sizeof(int), comp);

    int i = 0, j = 0, contentChildren = 0;

    // Assign the smallest sufficient cookie to each child
    while (i < gSize && j < sSize) {
        if (g[i] <= s[j]) { i++, contentChildren++; }

        j++;
    }
    return contentChildren;
}