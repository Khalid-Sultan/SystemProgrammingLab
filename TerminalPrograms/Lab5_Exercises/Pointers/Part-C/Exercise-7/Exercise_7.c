#include <stdio.h>
#define MAX 10000

int strLen(char* stringBeginning){
    int i;
    int length = 0;
    for(i=0;i<MAX;i++){
        if( *(stringBeginning) == '\0'){
            break;
        }
        length += 1;
        stringBeginning+=1;
    }
    return length;
}

void strCopy(char* firstString, char* secondString, int size){
    int lengthFirst = strLen(firstString);
    int i;
    for(i=0;i<size-1;i++){
        if(i==lengthFirst) break;
        *(secondString+i)=*(firstString+i);
    }
    *(secondString+i)='\0';
}

void main(){
    char str1[] = "Nothing feels Better.";
    int size = 10;
    char str2[size];
    printf("Before Copying: \n");
    printf("String 1 - %s \nString2 - %s \n",str1,str2);
    strCopy(&(str1[0]),&(str2[0]),size);
    printf("After Copying: \n");
    printf("String 1 - %s \nString2 - %s \n",str1,str2);
}
