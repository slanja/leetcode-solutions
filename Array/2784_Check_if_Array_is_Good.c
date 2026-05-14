int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

bool isGood(int* nums, int numsSize) {
    // sort the array in ascending order using qsort
    qsort(nums, numsSize, sizeof(int), comp);

    size_t i = 0; // index to iterate through the sorted array
    int prev = 0; // variable to keep track of the previous element in the array

    // if the array has only one element, it cannot be good
    if (numsSize == 1) return false;

    while (i < numsSize) {
        // checking if the last two elements are the same and equal to n - 1
        if (i >= numsSize - 2 && nums[i] == numsSize - 1) i++;

        // checking if the current element is equal to the previous element + 1
        else if (nums[i] == prev + 1) prev = nums[i++];

        // if not return false
        else return false;
    }
    return true;
}