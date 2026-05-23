int search(int* nums, int numsSize, int target) {
    int i = 0;
    
    while (i < numsSize) {
        // If nums[i] is equal to target, return i as the index of the target
        if (nums[i] == target) return i;
        
        i++;
    }
    return -1;
}