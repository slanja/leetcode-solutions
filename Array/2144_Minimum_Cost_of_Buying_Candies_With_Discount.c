int comp(const void *a, const void *b) {
    int valA = *(const int *)a;
    int valB = *(const int *)b;
    
    return (valA > valB) - (valA < valB);
}

int minimumCost(int* cost, int costSize) {
    // Sort the cost array in ascending order
    qsort(cost, costSize, sizeof(int), comp);

    // Start from the most expensive candy and apply the discount for every third candy
    int i = costSize - 1;
    int free = 1;
    int price = 0;

    // Iterate through the sorted cost array and calculate the total price
    while (i >= 0) {
        // If the current candy is the third one, skip it (free)
        if (free == 3) {
            free = 1;
            i--;
        }
        // Otherwise, add the cost of the candy to the total price and move to the next candy
        else {
            price += cost[i];
            i--;
            free++;
        }  
    }
    return price;
}