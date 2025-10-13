//ME 6th Silly Sentences / Madlibs
#include <stdio.h>
#include <string.h>

int main(void){
    char noun[50];
    char verb[50];
    char adj[50];

printf("Give me a noun prefferably a place: \n");
scanf("%s", noun);

printf("Give me a verb ending with ing: \n");
scanf("%s", verb);

printf("Give me an adjective: \n");
scanf("%s", adj);

printf("The %s frog %s through %s", adj, verb, noun);


    return 0;
}