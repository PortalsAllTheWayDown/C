#include <stdio.h>

/* print Fahrenheit=Celsius table
    for fahr = 0, 20, ..., 300 */

main()
{
    float fahr,celsius;  // In C the variables must be declared before they are used. usually at the beginning of the function before any executable statements.
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr Celsius\n");
    printf("_____________\n\n");
    while (fahr <= upper) {  // While fahr is less then or equal to upper which is 300 the loop will continue
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);//The 3 and 6 before each d will make the output right justified.
        fahr = fahr + step; // Each new loop adds 20 to fahr
    }
}
//integers when interacting with floats will turn into floats but its better to show in the code that whats meant to be a float is a float.
//The %3.0f shows that one number will be printed and none of the decimal while 6.1 will print atleast six characters wide with 1 digit after the decimal point.
//%d print as decimal integer, %6d print as decimal integer at least 6 characters wide, %f print as floating point, %6f print as floating point, at least 6 charcters wide. %.2f print as floating point, 2 characters after decimal point, %6.2f print as floating point at least 6 wide and 2 after decimal point.

