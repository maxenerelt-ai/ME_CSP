// ME 6th My family loop
 #include <stdio.h>
 #include <string.h>

 int main(void){
 const char *family[] = {"Max", "Zorro", "Enyx", "Soko"};

 for (int i = 0; i < 4; i++) {
        printf("Hello %s\n", family[i]);
    }

        return 0;
}