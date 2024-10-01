#include <stdio.h>

// Function that takes two integers and modifies them (but doesn't affect the originals)
void modifyValues(int x, int y) {
    x = 100;  // Modify the value of x (this only changes the local copy)
    y = 200;  // Modify the value of y (this only changes the local copy)
    printf("Inside function: x = %d, y = %d\n", x, y);
}

int main() {
    int a = 10, b = 20;
    
    // Print original values
    printf("Before function call: a = %d, b = %d\n", a, b);
    
    // Call modifyValues function (pass-by-value)
    modifyValues(a, b);
    
    // Print values after function call
    printf("After function call: a = %d, b = %d\n", a, b);
    
    return 0;
}
