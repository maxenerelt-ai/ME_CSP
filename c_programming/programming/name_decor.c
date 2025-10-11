//ME 6th Name Decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[50];
    char decor[100];

    printf("What is your name: \n");
    scanf("%s", name);

    strcat(decor,"<<<");
    strcat(decor,name);
    strcat(decor, ">>>");
  

    printf("Your name: %s\n", decor);

        return 0;
}
