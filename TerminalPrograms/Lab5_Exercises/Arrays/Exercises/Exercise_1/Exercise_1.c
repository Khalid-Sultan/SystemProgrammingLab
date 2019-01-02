#include <stdio.h>
#define ARRAYSIZE 10
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
    int age[] = {21,18, 23, 33, 47, 88, 32, 12, 19, 30};
    printf("Original Array : ");
    int i;
    for(i = 0; i<ARRAYSIZE;i++){
            printf("%d  ",age[i]);
    }
    int* firstPointer = &(age[0]);
    sortingFunction(firstPointer,ARRAYSIZE);
    printf("\nFinal Array : ");
    for(i = 0; i<ARRAYSIZE;i++){
            printf("%d  ",age[i]);
    }
}
