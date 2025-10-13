// ME 6th Time of Day
#include <stdio.h>
#include <string.h>

int main(void){
    int time;
    printf("Hello what is the time in Military: \n");
    scanf("%d", &time);

    if(time <= 12){
        printf("Good Morning!");
    }
    else if(time <= 20){
        printf("Good evening!");
    }
    else{
        printf("Good Night!");
    }
    return 0;
}