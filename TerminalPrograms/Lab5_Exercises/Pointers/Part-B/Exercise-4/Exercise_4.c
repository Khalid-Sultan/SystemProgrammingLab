#include <stdio.h>

void swapper(int firstNumber, int secondNumber){
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
}

void main(){
    int i = 20;
    int j = 36;
    printf("This is swapping program with out using pointers.\n");
    printf("Before Swapping i=%d and j=%d.\n",i,j);
    swapper(i,j);
    printf("After Swapping i=%d and j=%d.\n",i,j);
    printf("As we expected it does not work.");
}
