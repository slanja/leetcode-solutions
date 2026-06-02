int removeDuplicates(int* nums, int numsSize) {
    int unique = 1;
    size_t j = 1;

    // Iterate through the array and remove duplicates
    for (size_t i = 0; i < numsSize - 1; i++) {
        // If the current element is different from the next one, it's unique
        if (nums[i] != nums[i + 1]) {
            nums[j++] = nums[i + 1];
            unique++;
        }
    }

    return unique;
}