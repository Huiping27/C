#include <stdio.h>

/* Count lines, blanks, and tabs in input */
int main() {

    int c;           // Variable to store the current character
    int nl = 0;      // Counter for newlines
    int blanks = 0;  // Counter for blanks (spaces)
    int tabs = 0;    // Counter for tabs

    // Read characters until EOF
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;    // Increment newline counter
        } else if (c == ' ') {
            blanks++; // Increment blank space counter
        } else if (c == '\t') {
            tabs++;   // Increment tab counter
      }
    }

 
    

    // Print the results with labels
    printf("Newlines: %d\n", nl);
    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);

    return 0;
}

