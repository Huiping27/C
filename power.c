#include <stdio.h>

// Function to calculate the power of a number
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result = result * base;  // Multiply base by itself exponent times
    }
    return result;
}

/* Test power function */
int main() {
    int i;
    
    for (i = 0; i < 10; i++) {
        // Print the value of i, 2 raised to i, and -3 raised to i
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}
