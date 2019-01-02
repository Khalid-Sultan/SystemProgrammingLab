//Arrays1.c
#include <stdio.h>
int main() {
    int age1 = 21;
    int age2 = 18;
    int age3 = 23;
    int maxage = -10000;
    if (age1 > maxage ) maxage = age1;
    if (age2 > maxage ) maxage = age2;
    if (age3 > maxage ) maxage = age3;
    printf("\nThe maximum age is = %d \n", maxage);
    return 0;
}
