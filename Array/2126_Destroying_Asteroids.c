int comp(const void *a, const void *b) {
    int valA = *(const int *)a;
    int valB = *(const int *)b;
    
    return (valA > valB) - (valA < valB);
}

bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize) {
    // Sort the asteroids in ascending order to ensure we can destroy smaller ones first
    qsort(asteroids, asteroidsSize, sizeof(int), comp);

    // Use long long to prevent integer overflow when summing masses
    long long massSum = mass;

    // Iterate through the sorted asteroids and check if we can destroy each one
    for (size_t i = 0; i < asteroidsSize; i++) {
        if (massSum >= asteroids[i]) massSum += asteroids[i];
        else return false;
    } 
    return true;
}