// count number of characters in input

// When running this in a terminal, to manually signal EOF, you typically press:
// ctrl + Z

#include <stdio.h>

int main (void)
{
    long nc; // declare variable number of characters
    nc = 0; 
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);

    return 0;
}