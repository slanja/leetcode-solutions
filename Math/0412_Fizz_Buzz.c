char** fizzBuzz(int n, int* returnSize) {
    // Allocate memory for the answer array
    char** answer = malloc(n * sizeof(char*));
    *returnSize = n;

    for (size_t i = 0; i < n; i++) {
        int num = i + 1;

        // Allocate memory for each element in the answer array
        answer[i] = malloc(12 * sizeof(char));

        // Determine the appropriate string for each number
        if (num % 3 == 0 && num % 5 == 0) sprintf(answer[i], "FizzBuzz");
        else if (num % 3 == 0) sprintf(answer[i], "Fizz");
        else if (num % 5 == 0) sprintf(answer[i], "Buzz");
        else sprintf(answer[i], "%d", num);
    }
    return answer;
}