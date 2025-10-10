// ME 6th Expressions notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025; //whole numbers
    float pi = 3.14; //decimals
    double long_pi = 3.1459265359; // decimals that are 2x long

    printf("8/3 = %f\n", (float) 8/3); // cast is specificall stating the data type (float)
    printf("8/3 = %f\n", 8/3.0);
    printf("2 ^ 4 = %f\n", pow(2, 4));

    year += 1;
    year ++;

    return 0;
}
/*
What is the difference between an integer and a float in C?
    Integer only holds numbers without decimals while float always holds a decimal
How does C handle integer division compared to float division?
    Handles the same but you need to have same side but add .0 to the end for float division instead of changing the sign
List the arithmetic operators available in C and their functions.
    + = additon, - = subtract, / = division, * = multiplication, % = modulo (remainder)
What is the modulus operator, and how is it used?
    It is used to find the remainder of a number
How do you round a float to the nearest integer in C?
    using roundf()
What is type casting in C? Provide an example of explicit type casting.
    Specifying the type of data the output will be shown above
How do compound assignment operators work in C? List three examples.
Compound assignments work as symbols to add things together or minus. - , *, +
What is the purpose of the math.h library? Name three functions it provides.
    To get more math related operators to use in your code. 
How do you print a float with a specific number of decimal places using printf()?
By using float and %.number of decimals you want
What happens when you mix integer and float operations in C?
The code runs and the code used will go through and give an output with or without a decimal.

*/

