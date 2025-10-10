//ME 6th Expressions Practice
#include <stdio.h>
#include <math.h>
int main(void){
 int x = pow(1, 4);
 int r = pow(2, 2);
 int c = pow(3, 3);
 int s = pow(2, 5);
 int f = pow(1, 2);
 int q = pow(3, 2);
 int t = pow(5, 2);
 
printf("7 - 24 / 8 * 4 + 6 = %d\n", 7 - 24 / 8 * 4 + 6);
printf("18 / 3 - 7 + 2 * 5 = %d\n", 18/3-7+2*5);
printf("6 * 4 / 12 + 72 / 8 - 9 = %d\n", 6*4/12+72/8-9);
printf("(17 - 6 / 2) + 4 * 3 = %d\n", (17-6/2)+4*3);
printf("-2 (1 * 4 -2 / 2) + (6 + 2 - 3) = %d\n", -2*(1*4-2/2)+(6+2-3));
printf("-1 * [(3 - 4 * 7) / 5] -2 * 24 / 6 = %d\n", -1*((3-4*7)/5)-2*24/6);
printf("(3 * 5 ^ 2 / 15) - (5 - 2 ^ 2) = %d\n", (3 * t / 15) - (5 - r) );
printf("(1 ^ 4 * 2 ^ 2 + 3 ^ 3) - 2 ^ 5 / 4 = %d\n", (x * r + c) - s / 4 );
printf("(22 / 2 - 2 * 5) ^ 2 + (4 - 6 / 6) ^ 2 = %d\n", f + q);



    return 0;
}