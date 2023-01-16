#include <stdio.h>

// Recursive implementation

// Advantages: The code is simple and easy to understand.
// Disadvantages: The recursive function calls can consume a lot of memory and the function can be very slow for large values of n.

int F_recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    return F_recursive(n-3) + F_recursive(n-2);
}

// Iterative implementation using an array

// Advantages: The iterative implementation uses less memory and is faster than the recursive implementation.
// Disadvantages: The code is longer and can be a bit more difficult to understand than the recursive implementation.

int F_array(int n) {
    int i, fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;
    for (i = 3; i <= n; i++) {
        fib[i] = fib[i-3] + fib[i-2];
    }
    return fib[n];
}

// Iterative implementation using three variables

// Advantages:
// This implementation uses less memory and is faster than the recursive implementation.
// It is shorter and easier to understand than the iterative implementation using an array.
// It stores only the last three values of the sequence, which makes it more memory-efficient.
// Disadvantages: 
// This is the most efficient implementation among the three in terms of time and space Complexity.

int F_dynamic(int n) {
    int a=0, b=1, c=2;
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    for (int i = 3; i <= n; i++) {
        int temp = c;
        c = a + b;
        a = b;
        b = temp;
    }
    return c;
}

int main() {
    int n = 4;
    printf("F_recursive(%d) = %d\n", n, F_recursive(n));
    printf("F_array(%d) = %d\n", n, F_array(n));
    printf("F_dynamic(%d) = %d\n", n, F_dynamic(n));
    return 0;
}
