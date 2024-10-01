#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* Count lines, words, and characters in input */
int main() {
    int c, nl, nw, nc, state;

    state = OUT;      // Start in the OUT state (outside a word)
    nl = nw = nc = 0; // Initialize counters to 0

    while ((c = getchar()) != EOF) { // Read characters until EOF (End of File)
        ++nc;  // Increment character count

        if (c == '\n') {  // If the character is a newline, increment line count
            ++nl;
        }

        if (c == ' ' || c == '\n' || c == '\t') { // Check for space, newline, or tab
            state = OUT; // Set state to OUT (outside a word)
        } else if (state == OUT) { // If not a space/newline/tab and currently OUT
            state = IN;  // Set state to IN (inside a word)
            ++nw;        // Increment word count
        }
    }

    // Print the results
    printf("Lines: %d, Words: %d, Characters: %d\n", nl, nw, nc);

    return 0;  // Return 0 to indicate successful execution
}

