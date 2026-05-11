int mySqrt(int x) {
    // Handle base cases (0 and 1) to avoid division by zero
    if (x < 2) return x;
    
    double guess = x / 2.0;
    double prev = x;

    // Newton's method converges from above, loop while the guess is strictly improving
    while (guess < prev) {
        prev = guess;
        // The core iterative formula: average of (guess) and (x / guess)
        guess = 0.5 * (guess + (x / guess));
    }

    // Return the integer part of the final approximation
    return (int)prev;
}