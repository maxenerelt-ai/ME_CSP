//ME 6th Financial Calculator
#include <stdio.h>
#include <math.h>

int main(void){

    int rent[300];
    int util[100];
    int groceries[50];
    int transport[50];
    int income[100];

    printf("What is your monthly income: \n");
    scanf("%d", income);

    printf("What is your monthly rent: \n");
    scanf("%d", rent);
    printf("What is monthly utility bill: \n");
    scanf("%d", util);
    printf("What is your monthly grocery bill: \n");
    scanf("%d", groceries);
    printf("What is your monthly transport: \n");
    scanf("%d", transport);

    int util2 = rent / income * 100;




    
    return 0;
}