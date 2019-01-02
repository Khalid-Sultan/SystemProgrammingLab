//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define ROW 5
//#define COL 50
//
//
//void convertToInt(char* cBegin,char* charRowBeginning, int size){
//    int number = 0;
//    for(number=0; number<size; number++){
//        *(cBegin+number) = *(charRowBeginning+number);
//    }
//}
//void cleanRow(char* charRowBeginning, int* cleanedRowBeginning){
//    int i;
//    int curr,size=0;
//    char* previousElementPointer = charRowBeginning;
//    for(i=0, curr=0;i<COL, curr<5;i++){
//	if(curr==5) break;
//        char currentElement = *(charRowBeginning);
//        charRowBeginning+=1;
//        size+=1;
//        if((currentElement==' ') || (currentElement=='\n')){
//		char colo[size-1];
//		char* ptr = &(colo[0]);
//		printf("size - %d \n",size);
//                convertToInt( ptr , previousElementPointer,size-1);
//		*(charRowBeginning+curr) = atoi(colo);
//		previousElementPointer = charRowBeginning;
//                curr+=1;
//                size=0;
//        }
//    }
//}
//void printArray(int* index){
//    int j;
//    for(j=0;j<5;j++){
//        printf("%d  ",*(index+j));
//    }
//    printf("\n");
//}
//void emptyRow(int* firstElement){
//    int i;
//    for(i=0;i<5;i++){
//        *(firstElement+i)=0;
//    }
//}
//void main(){
//    int i,j;
//    int row1[5],row2[5],row3[5],row4[5],row5[5];
//    int* rowPointers[5] = { &(row1[0]),&(row2[0]),&(row3[0]),&(row4[0]),&(row5[0])};
//    for(i=1;i<=5;i++){
//        char row[COL];
//        printf("Enter row %d: ",i);
//        fgets(row,sizeof(row),stdin);
//	int* cleanedRow;
//	emptyRow(&(row1[0]));
//	emptyRow(&(row2[0]));
//	emptyRow(&(row3[0]));
//	emptyRow(&(row4[0]));
//	emptyRow(&(row5[0]));
//
//        if(i==1) cleanedRow = &(row1[0]);
//        if(i==2) cleanedRow = &(row2[0]);
//        if(i==3) cleanedRow = &(row3[0]);
//        if(i==4) cleanedRow = &(row4[0]);
//        if(i==5) cleanedRow = &(row5[0]);
//	emptyRow(cleanedRow);
//        cleanRow(&(row[0]),cleanedRow);
//    }
//    printArray(&(row1[0]));
//    printArray(&(row2[0]));
//    printArray(&(row3[0]));
//    printArray(&(row4[0]));
//    printArray(&(row5[0]));
//
//    // Row Totals
//    int rowSumArray[5];
//    for(i=0;i<5;i++){
//        int* currentRowFirstElement = rowPointers[i];
//        int sum = 0;
//        for(j=0;j<5;j++){
//            sum += *(currentRowFirstElement)+j;
//        }
//        rowSumArray[i] = sum;
//    }
//    // Col Totals
//    int colSumArray[5];
//    for(i=0;i<5;i++){
//        int sum = 0;
//        sum += row1[i];
//        sum += row2[i];
//        sum += row3[i];
//        sum += row4[i];
//        sum += row5[i];
//        colSumArray[i] = sum;
//    }
//    printf("Row Totals : ");
//    printArray(&(colSumArray[0]));
//    printf("Column Totals : ");
//    printArray(&(rowSumArray[0]));
//}