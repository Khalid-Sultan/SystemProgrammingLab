#include <stdio.h>

int countDigits(int input){
    int counter = 0;
    while(input>1){
        input/=10;
        counter++;
    }
    return counter;
}
void sortingFunction(int* firstPointer, int arraySize){
    int i,j;
    for (i=1;i<arraySize;i++){
        for(j=0;j<(arraySize-i);j++){
            int firstElement = *(firstPointer+j);
            int secondElement = *(firstPointer+j+1);
            if(firstElement>secondElement){
                int temp = *(firstPointer+j) ;
                *(firstPointer+j) = *(firstPointer+j+1);
                *(firstPointer+j+1) = temp;
            }
        }
    }
}

void main(){
    int input = 0;
    printf("Input : ");
    scanf("%d",&input);
    int digits = countDigits(input);
    int i;
    int array[digits];
    for(i=0;i<digits;i++){
        array[i] = input%10;
        input/=10;
    }
    sortingFunction(&(array[0]),digits);
    int Occurence[10];
    int Digit[] = {0,1,2,3,4,5,6,7,8,9};
    for(i=0;i<10;i++){
        int currentDigit = Digit[i];
        int j,counter=0;
        for(j=0;j<digits;j++){
            if(array[j]==currentDigit) counter++;
        }
        Occurence[i] = counter;
    }

    printf("\nDigit:\t\t");
    for(i=0;i<10;i++){
        printf("%d ",Digit[i]);
    }
    printf("\nOccurences:\t");
    for(i=0;i<10;i++){
        printf("%d ",Occurence[i]);
    }
}
