// count number of lines in input
// 
// When running this in a terminal, to manually signal EOF, you typically press:
// ctrl + Z

#include <stdio.h>

int main(void)
{
    int c; // declare character variable
    int nl; // declare newline counter variable

    nl = 0; 

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}