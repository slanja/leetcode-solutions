int climbStairs(int n) {
    if (n <= 2) return n;           // Base cases: 1 way to climb 1 step, and 2 ways to climb 2 steps

    // Using long long int to prevent integer overflow for large n
    long long int prev1 = 2;
    long long int prev2 = 1;
    long long int current = 0;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;    // The number of ways to climb to the current step is the sum of the ways to climb to the previous two steps

        prev2 = prev1;              // Update prev2 to be the previous step's value
        prev1 = current;            // Update prev1 to be the current step's value for the next iteration
    }
    return prev1;
}