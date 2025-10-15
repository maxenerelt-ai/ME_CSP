// ME 6th Updated financial Calculator
#include <stdio.h>
#include <string.h>
#include <math.h>

int user_inputs(char[] bill){
    printf("What is your monthly %s: ", user_inputs);
    scanf("%d", &user_inputs);
    

}


int calculations(int){
    float total = rent + util + groceries + transport;
    float change = income - total;

printf("Rent percentage is: %.2f\n", (rent / income) * 100);
printf("Utility percentage is: %.2f\n", (util / income) * 100);
printf("Grocery percentage is: %.2f\n", (rent / income) * 100);
printf("Transport percentage is: %.2f\n", (transport / income) * 100);
printf("Your change is: %.2f\n", change);
printf("You should save: %.2f\n", (change / 50) * 100);

}