//ME 6th Conditionals Notes
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){
    int grade;
    printf("What is your grade: ");
    scanf("%d", &grade);

    if(grade >=90){
        printf("You have an A!\n");
    }else{
        printf("You dont have an A!\n");
    }


    return 0;
}





/*
What puts something inside of the “if” statement?
if its in between the two curly brackers
How are conditions written in C?
By using If Else If Else by using curly brackets for inside if statement and regular curved brackets for x > 90
How do we write elif conditions in C?
by using else if
When do else conditions run?
If the If statement or else if statement doesnt run
What are the 3 logical operators in C?
&& = and
|| = or
| = not
*/