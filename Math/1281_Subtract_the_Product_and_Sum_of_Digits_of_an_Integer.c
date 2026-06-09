int subtractProductAndSum(int n) {
    // variable to store the current digit
    int digit = 0;

    // initialize variables to store the product and sum of digits
    int product = 1;
    int sum = 0;

    // loop until n becomes 0
    while(n > 0) {
        // get the last digit of n
        digit = n % 10;

        // update the product and sum of digits
        product *= digit;
        sum += digit;

        // remove the last digit from n
        n = n / 10;
    }
    // return the difference between the product and the sum of digits
    return product - sum;
}