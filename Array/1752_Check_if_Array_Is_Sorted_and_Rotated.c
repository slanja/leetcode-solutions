bool check(int* nums, int numsSize) {
    bool drop = false;

    for (int i = 1; i < numsSize; i++) {
        // Check if number drops
        if (nums[i] < nums[i - 1]) {
            // We can't drop more than once
            if (drop) return false;
            drop = true;
        }

        // If we have dropped and the current number is greater than the first number, then it's not sorted and rotated
        if (drop && nums[i] > nums[0]) return false;
    }
    return true;
}