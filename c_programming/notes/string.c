//ME 6th Strings Notes
#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "Max";
    char last_name[25];
    char full_name[100];
    
    printf("Please tell me your last name: \n");
    scanf("%s", last_name);
    
    printf("[%s]", name);

    strcat(full_name, name);
    printf("[%s]", name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    strcat(name, last_name);
    printf("[%s]", name);


    return 0;
}





/*
What is the difference between a string and a character?
A string can hold more than a character
What types of quotation marks do we need for a string?
"A double one like this "
What library do we need to include to access the string functions in C?
<string.h> 
List functions the library allows us to use.
strlen() strcpy() strtcat()
How do we concatenate strings in C?
By using strtcat() to put two strings together only 2 strings
How do we get individual characters from a string in C?
by using 
char firstChar = name[1]; = M
*/