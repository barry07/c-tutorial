// write a program to count blanks, tabs, and newlines

#include <stdio.h>

int main (void)
{
    int c; //character variable
    int t, b, nl; //tab variable, blank variable, newline variable

    t = 0;
    b = 0;
    nl = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n' ) {
            ++nl;
        }
            
        else if (c == '\t') {
            t++;
        }
            
        else if (c == ' ') {
            ++b;
        }
            
    printf("%d\n", t);
    printf("%d\n", b);  
    printf("%d\n", nl); 
    
    return 0;
}