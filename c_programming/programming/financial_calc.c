//ME 6th Financial Calculator
#include <stdio.h>
#include <math.h>

int main(void){
    float rent;
    float util;
    float groceries;
    float transport;
    float income;

    printf("What is your monthly income: ");
    scanf("%f", &income);
    printf("What is your monthly rent: ");
    scanf("%f", &rent);
    printf("What is your monthly utility bill: ");
    scanf("%f", &util);
    printf("What is your monthly grocery bill: ");
    scanf("%f", &groceries);
    printf("What is your monthly transport bill: ");
    scanf("%f", &transport);

    float total = rent + util + groceries + transport;
    float change = income - total;

printf("Rent percentage is: %.2f\n", (rent / income) * 100);
printf("Utility percentage is: %.2f\n", (util / income) * 100);
printf("Grocery percentage is: %.2f\n", (rent / income) * 100);
printf("Transport percentage is: %.2f\n", (transport / income) * 100);
printf("Your change is: %.2f\n", change);
printf("You should save: %.2f\n", (change / 50) * 100);

    return 0;
}