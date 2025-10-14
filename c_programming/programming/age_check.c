// ME 6th Old Enough
#include <stdio.h>
#include <string.h>

int main(void){
    int age;

printf("What is your Age:  \n");
scanf("%d", &age);

if(age >= 18){
    printf("You can Vote!");
}
else if(age >= 16){
    printf("You can drive!");
}
else if(age > 15){
    printf("You can get a learners permit!");
}
else{
    printf("You can go to school!");
}


    return 0;
}