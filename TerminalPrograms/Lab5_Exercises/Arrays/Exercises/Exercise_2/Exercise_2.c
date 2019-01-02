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
    for(i=0;i<digits;i++){
        int currentElement = array[i];
        int nextElement;
        int finalIndex = digits-1;
        if(i<finalIndex) nextElement = array[i+1];
        else continue;
        if(currentElement==nextElement){
            printf("Repeated digit is %d \n",currentElement);
        }
    }

    for(i=0;i<digits;i++){
        printf("%d ",array[i]);
    }
}
