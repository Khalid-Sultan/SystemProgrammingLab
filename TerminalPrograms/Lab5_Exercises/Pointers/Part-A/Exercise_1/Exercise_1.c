#include <stdio.h>

void main(){
    double d = 10.01100101110101555;
    int i = 1021;
    char str[]= "Hi I'm a string";

    double* doublePointer = &(d);
    int* intPointer = &(i);
    char * strPointer = &(str);

    printf("The double %f is stored at the memory address %p. \n",d,doublePointer);
    printf("The integer %d is stored at the memory address %p. \n",i,intPointer);
    printf("The string %s is stored at the memory address %p. \n",str,strPointer);
}
