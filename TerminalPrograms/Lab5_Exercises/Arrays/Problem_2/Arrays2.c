//Arrays2.c
#include <stdio.h>
#define ARRAYSIZE 10

int main() {
    int age[] = {21,18, 23, 33, 47, 88, 32, 12, 19, 30};
    /* Assume the max age is -10000. Note: All elements
    * in the array age are going to be greater than
    * the assumed value */
    int maxage = -1000, person;
    for(person=0; person<ARRAYSIZE; ++person){
        if (age[person] > maxage ) maxage=age[person];
    }
    printf("\nThe maximum age is = %d ", maxage);
    return 0;
}
