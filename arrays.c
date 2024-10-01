#include <stdio.h>

/* count digits, white space, others*/

int main() {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0; // Initialize counters for white spaces and other characters
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0; // Initialize array for digit counts to 0

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0']; // Increment count for the corresponding digit
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite; // Increment white space counter
        else
            ++nother; // Increment other characters counter
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]); // Print the counts of each digit

    printf(", white space = %d, other = %d\n",
        nwhite, nother); // Print counts of white spaces and other characters

    return 0; // Return success
}




