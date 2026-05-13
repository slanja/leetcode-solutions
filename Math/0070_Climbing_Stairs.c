int climbStairs(int n) {
    if (n <= 2) return n;

    long long int prev1 = 2;
    long long int prev2 = 1;
    long long int current = 0;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;

        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}