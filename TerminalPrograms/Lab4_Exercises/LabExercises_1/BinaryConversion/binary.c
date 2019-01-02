#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int powerFunction(int i){
	int temp = 1;
	for(int z=0; z<=i;z++){
		temp*=2;
	}
	return temp;
}
int getNumber(char c[8]){
	int number = 0;
	for(int i=0;i<=7;i++){
		char c2 = c[i];
		char* x = &(c2);
		int j = atoi(x);
		int p = j * powerFunction(6-i);
		number += p;
	}
	return number;
}
void main(){
	printf("Enter a string of binary integers : ");
	char c[8];
	fgets(c,sizeof(c)+1,stdin);
	int number = getNumber(c);
	printf("The decimal or base-10 equivalent of %s is %d \n",c,number);
}
