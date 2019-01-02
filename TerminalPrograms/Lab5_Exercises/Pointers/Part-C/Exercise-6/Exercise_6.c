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

void main(){
    char str1[] = "This is test 1.";
    int length_1 = strLen( &(str1[0]) );
    printf("The length of \n\t %s \t : %d characters",str1,length_1);
    char str2[] = "C is one of the best ever.";
    int length_2 = strLen( &(str2[0]) );
    printf("The length of \n\t %s \t : %d characters",str2,length_2);
    char str3[] = "Ask and You Shall Receive.";
    int length_3 = strLen( &(str3[0]) );
    printf("The length of \n\t %s \t : %d characters",str3,length_3);

}
