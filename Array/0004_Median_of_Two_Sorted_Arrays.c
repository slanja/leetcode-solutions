int comp(const void *a, const void *b) {
    double valA = *(const double *)a;
    double valB = *(const double *)b;
    
    return (valA > valB) - (valA < valB);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    // Allocate memory for the merged array and sort it
    double* mergedArray = malloc(sizeof(double) * (nums1Size + nums2Size));
    int len = (nums1Size + nums2Size);
    size_t i = 0;

    // Merge the two arrays into one
    for (size_t j = 0; j < nums1Size; j++) mergedArray[i++] = nums1[j];
    for (size_t k = 0; k < nums2Size; k++) mergedArray[i++] = nums2[k];

    // Sort the merged array
    qsort(mergedArray, len, sizeof(double), comp);

    // If the merged array has only one element, return it
    if (len == 1) {
        double result = mergedArray[0];
        free(mergedArray);
        return result;
    }

    // If the length of the merged array is odd, return the middle element
    else if (len % 2 == 1) {
        double result = mergedArray[(len / 2)];
        free(mergedArray);
        return result;
    }

    // If the length is even, calculate the average of the two middle elements
    else {
        double result = (mergedArray[(len / 2) - 1] + mergedArray[len / 2]) / 2;
        free(mergedArray);
        return result;
    }
}