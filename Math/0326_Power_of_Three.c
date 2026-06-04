bool isPowerOfThree(int n) {
    // Handle base case
    if (n == 0) return false;

    // Check if n is a power of 3 by iterating through powers of 3 up to 3^30
    for (size_t i = 0; i < 31; i++) {
        if (pow(3, i) == n) return true;
    }

    return false;
}