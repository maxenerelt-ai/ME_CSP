// ME 6th How to create random number generator
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    for(int i=0;i < 10; i++){
    int num = rand() %20 +1;
    printf("%d\n", num);
    }




    return 0;
}