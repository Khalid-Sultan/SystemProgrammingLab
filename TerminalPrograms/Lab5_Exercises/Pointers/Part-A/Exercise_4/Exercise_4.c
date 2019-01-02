#include <stdio.h>

int globalVariable = 10;
const int CONSTANT = 5;

void local(){
    int localVariable = 2;
    int* localPointer = &(localVariable);
    printf("The Local variable is located at %p. \n", localPointer);
}

void main(){
    local();
    int* globalPointer = &(globalVariable);
    int* constPointer = &(CONSTANT);
    printf("The Global variable is located at %p. \n", globalPointer);
    printf("The Constant variable defined at the top is located at %p. \n", constPointer);
}
