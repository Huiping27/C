#include <stdio.h>

/* Copy input to output, replacing each string of one or more blanks by a single blank*/
int main () {

int c;
int in_blank = 0;//Flag to indicate if the current state is a blank

while ((c = getchar()) != EOF) { //combined declaration and reading
    if (c== ' ') {
    // If the current charactr is a blank and we are not already in a blank sequence
    
    if(!in_blank){
        putchar(' ');// Print a single blank
        in_blank = 1;//Set the flag indicating we're in a blank sequence
    } 
    
    } else {
        //If the current character is not a blank
        putchar(c); // Print the character
        in_blank = 0;// Reset the blank flag
    }
    
}

return 0;

}



