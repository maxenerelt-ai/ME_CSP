//ME 6th Name Decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[50];
    char thing = ">>>";
    char thing1 = "<<<";
    printf("What is your name: \n");
    scanf("%s", &name);

    strcat("[%s]", name);

    


    return 0;
}