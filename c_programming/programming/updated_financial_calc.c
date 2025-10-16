// ME 6th Updated financial Calculator
#include <stdio.h>

float money(char bill[]){
    float amount;
    printf("What is your monthly %s: ", bill);
    scanf("%f", &amount);
    return amount;
}

int main(void){
    float rent;
    float util;
    float groceries;
    float transport;
    float income;

    income = money("income");
    rent = money("rent");
    util = money("utilities");
    groceries = money("groceries");
    transport = money("transport");

    float total = rent + util + groceries + transport;
    float change = income - total;

    printf("Rent percentage: %.2f%%\n", (rent / income) * 100);
    printf("Utilities percentage: %.2f%%\n", (util / income) * 100);
    printf("Groceries percentage: %.2f%%\n", (groceries / income) * 100);
    printf("Transport percentage: %.2f%%\n", (transport / income) * 100);
    printf("Total: %.2f\n", total);
    printf("Change: %.2f\n", change);
    printf("Amount to save: %.2f\n", income * 0.2);

    return 0;
}
