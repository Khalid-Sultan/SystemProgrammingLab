#include <stdio.h>
#include <stdlib.h>
#define ROW 5
#define COL 50
int myAtoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    for (; str[i] != '\0'; ++i)
        res = res*10 + str[i] - '0';
    return sign*res;
}

int convertToInt(char* charRowBeginning, int size){
    int number = 0, sized;
    char c[size];
    for(number=0,sized=size; number<size,size>=0;number++,size--){
        c[number] = *(charRowBeginning-size);
    }
    int i = myAtoi(&c);
    return i;
}
void cleanRow(char* charRowBeginning, int* cleanedRowBeginning){
    int i;
    int curr,size=0;
    for(i=0, curr=0;i<COL, curr<5;i++){
        char currentElement = *(charRowBeginning);
        if((currentElement==' ') || (currentElement=='\n')){
                char previousElement = *(charRowBeginning-1);
                *(cleanedRowBeginning+curr) = convertToInt(charRowBeginning,size);
                curr+=1;
                size = 0;
        }
        charRowBeginning+=1;
        size+=1;
    }
}
void printArray(int* index){
    int j;
    for(j=0;j<5;j++){
        printf("%d  ",*(index+j));
    }
    printf("\n");
}
void emptyRow(int* firstElement){
    int i;
    for(i=0;i<5;i++){
        *(firstElement+i)=0;
    }
}
int main(){
    int i,j;
    int row1[5],row2[5],row3[5],row4[5],row5[5];
    int* rowPointers[5] = { &(row1[0]),&(row2[0]),&(row3[0]),&(row4[0]),&(row5[0])};
    for(i=1;i<=5;i++){
        char row[COL];
        printf("Enter row %d: ",i);
        fgets(row,sizeof(row),stdin);
        int* cleanedRow;
        if(i==1) cleanedRow = &(row1[0]);
        if(i==2) cleanedRow = &(row2[0]);
        if(i==3) cleanedRow = &(row3[0]);
        if(i==4) cleanedRow = &(row4[0]);
        if(i==5) cleanedRow = &(row5[0]);
        emptyRow(cleanedRow);
        cleanRow(&(row[0]),cleanedRow);
    }
    printArray(&(row1[0]));
    printArray(&(row2[0]));
    printArray(&(row3[0]));
    printArray(&(row4[0]));
    printArray(&(row5[0]));

    // Row Totals
    int rowSumArray[5];
    for(i=0;i<5;i++){
        int* currentRowFirstElement = rowPointers[i];
        int sum = 0;
        for(j=0;j<5;j++){
            sum += *(currentRowFirstElement)+j;
        }
        rowSumArray[i] = sum;
    }
    // Col Totals
    int colSumArray[5];
    for(i=0;i<5;i++){
        int sum = 0;
        sum += row1[i];
        sum += row2[i];
        sum += row3[i];
        sum += row4[i];
        sum += row5[i];
        colSumArray[i] = sum;
    }
    printf("Sum Of Elements of the each row : ");
    printArray(&(rowSumArray[0]));
    printf("Sum Of Elements of the column of each row : ");
    printArray(&(colSumArray[0]));
    return 0;
}
