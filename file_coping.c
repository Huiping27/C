
#include <stdio.h> //Include Header File

int main() {
    int c;
    c = getchar(); // read the first character from input
    while ( c != EOF) {  // LOOP until the end of the file(EOF) is reached
        putchar(c); // Pass the character to the function putchar
        c = getchar(); // read the text from input
    }
    
    //demonstrate the result of getchar() != EOF
    //verfiy the expression getchar() != EOF is 0 or 1.

int result = (getchar() != EOF);

    if(result ) {
        printf("The value of getchar() != EOF is 1\n");
    }  else {
        printf("The value of getchar() != EOF is 0\n");
    }

    printf("This is the value of EOF:%d\n", EOF);
    return 0;
    
}