#include <stdio.h>

int main() {
    int c;           // Variable to store the current character
    int in_word = 0; // Flag to indicate if we're currently inside a word

    // Read characters until EOF (End of File)
    while ((c = getchar()) != EOF) {
        // Check if the character is a whitespace (space, tab, newline)
        if (c == ' ' || c == '\n' || c == '\t') {
            // If we're inside a word, print a newline and set in_word to 0
            if (in_word) {
                putchar('\n');
                in_word = 0; // Now we're outside a word
            }
        } else {
            // If it's not a whitespace, print the character
            putchar(c);
            in_word = 1; // Set flag to indicate we're inside a word
        }
    }

    return 0; // Return success
}
