// ME 6th Fizz Buzz
#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 50; i++){
        if (i / 15 * 15 == i)
            printf("Fizz Buzz\n");
        else if (i / 3 * 3 == i)
            printf("Fizz\n");
        else if (i / 5 * 5 == i)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }

    return 0;
}
