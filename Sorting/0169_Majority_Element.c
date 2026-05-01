int majorityElement(int* nums, int numsSize) {
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        // If we have no candidate, take the current one
        if (count == 0) {
            candidate = nums[i];
        }
        
        // If it's the same, vote up, otherwise vote down
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // The winner is guaranteed to be the majority
    return candidate; 
}