#include <stdio.h>

/* print Fahrenheit-Celcius table - floating point version*/

main()
{
    float fahr, celcius; // floating point
    int lower, upper, step;

    lower = 0; /* lower limit of temp table*/
    upper = 400; /* upper limit of temp table*/
    step = 50; /* step size*/

    printf("Temperature Conversion Table:\n");

    fahr = lower;
    while (fahr <= upper)
    {
        celcius = (5.0 / 9.0) * (fahr - 32.0); // use float version to calculate
        printf("%3.0f\t%6.2f\n", fahr, celcius);
        fahr = fahr + step;
    }
    
}