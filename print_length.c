#include <stdio.h>

#define MAX_WORD_LENGTH 20 // Maximum length of a word to be displayed in histogram

/* Print a horizontal histogram of word lengths */
int main() {
    int c;                  // Variable to store the current character
    int length = 0;         // Current length of the word
    int word_lengths[MAX_WORD_LENGTH + 1] = {0}; // Array to count words of each length

    // Read characters until EOF
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            // End of a word
            if (length > 0) {
                if (length > MAX_WORD_LENGTH) {
                    length = MAX_WORD_LENGTH; // Cap the length to the maximum
                }
                word_lengths[length]++; // Increment the count for this word length
                length = 0; // Reset length for the next word
            }
        } else {
            // Counting the length of the word
            length++;
        }
    }

    // Account for the last word if input does not end with whitespace
    if (length > 0) {
        if (length > MAX_WORD_LENGTH) {
            length = MAX_WORD_LENGTH; // Cap the length to the maximum
        }
        word_lengths[length]++;
    }

    // Print the histogram
    printf("Histogram of word lengths:\n");
    for (int i = 1; i <= MAX_WORD_LENGTH; ++i) {
        if (word_lengths[i] > 0) {
            printf("%2d: ", i);
            for (int j = 0; j < word_lengths[i]; ++j) {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
