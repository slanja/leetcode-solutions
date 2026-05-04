int fib(int n){
    unsigned fib_n2 = 0;
    unsigned fib_n1 = 1;

    for (size_t i = 0; i < n; i++) {
        unsigned tmp = fib_n2 + fib_n1;
        fib_n2 = fib_n1;
        fib_n1 = tmp;
    }

    return fib_n2;
}