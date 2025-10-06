// ME 6th Variables Notes -C
#include <stdio.h>

int main(void){
    int num = 4;
    float pi = 3.14;
    char grade = 'A'; // Char will only hold one letter
    //bool passing = true

    printf("%d", num);

    return 0;
}

/*
 Why the & while scanf 
*/

//What is the main difference between declaring variables in Python and C?
    // How in python its easy you do variable name = variable thingy nut in c you need what type of data the variable will hold like int and a semicolon on the end

//In C, what is the purpose of specifying a data type when declaring a variable?
    // Cause C is a strict code where you have to specify what is in the variables or else it will break the code

//List three common data types used in C and their corresponding format specifiers for printf().
    // int %d float %f double %lf char %c list of characters for a string %s

//How do you declare and initialize an integer variable named "age" with the value 25 in C?
    // int age = 25
    // printf("%d", age); 

//What is the difference between printf() and scanf() functions in C?
    // printf uses variables for a print statement. scanf uses printf to make a user input scanf cannot use a space

//Write a C program that asks the user for their name and age, then prints a greeting message with their information.
    
    /*#include <stdio.h>

    int main(void){
    char name;
    int age;
    printf("Hello what is your name and age?");
    scanf("%s &name", "%d &age");
    printf("%s is" "%d\n", name, age);
    }
    /*

//How do you add comments in C? What are the two types of comments?
    // a double slash // or a   /* */ //anything inside it becomes a comment

//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    // taking your standard library input and out puts.

//In C, what is the significance of the main() function?
    //

//Write a C program that calculates the area of a rectangle. Ask the user to input the length and width, then display the result.
    //

//What is the difference between %d and %f format specifiers in printf()?
    //

//How do you print a newline character in C?
    //

//Write a C program that converts temperature from Celsius to Fahrenheit. Ask the user for input in Celsius and display the result in Fahrenheit.
    //

//What is the purpose of the & symbol when using scanf() to get user input?
    //

//How do you declare a constant in C? Provide an example.
    // const at the front cannot be changed