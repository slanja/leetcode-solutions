int hammingWeight(int n) {
    int bits = 0;

    // loop until n becomes 0
    while (n > 0) {
        // if the last bit of n is 1, increment the bits count
        if (n % 2 == 1) bits += 1;
        // remove the last bit from n
        n = n / 2;
    }
    return bits;
}