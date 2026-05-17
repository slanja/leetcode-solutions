char* convertToTitle(int columnNumber) {
    // allocate memory for the output string, which will hold the column title
    char* output = calloc(1020, sizeof(char));
    int i = 0;

    // convert the column number to a column title
    while (columnNumber > 0) {
        columnNumber--;

        // calculate the character for the current column and store it in the output string
        output[i++] = columnNumber % 26 + 'A';
        // update the column number for the next iteration
        columnNumber = columnNumber / 26;
    }

    // reverse the output string to get the correct order of characters
    int head = 0, tail = i - 1;

    // swap characters until the head and tail pointers meet
    while (head < tail) {
        char temp = output[head];
        output[head] = output[tail];
        output[tail] = temp;
        head++;
        tail--;
    }

    return output;
}