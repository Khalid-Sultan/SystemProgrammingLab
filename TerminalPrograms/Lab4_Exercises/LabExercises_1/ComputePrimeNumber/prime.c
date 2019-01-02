#include <stdio.h>

void checkPrimeOrNot(int currentNumber){
	int factorCounter = 0;
	for(int j=1;j<=currentNumber;j++){
		if(currentNumber%j==0){
			factorCounter++;
		}
		if(factorCounter>2){
			break;
		}
	}
	if(factorCounter==2){
		printf("%d ",currentNumber);
	}
}
void loopUntilMax(int max){
	for(int i=2;i<max;i++){
		int currentNumber = i;
		checkPrimeOrNot(currentNumber);
	}
}

void main(){
	int max;
	printf("What is the maximum limit of prime numbers do you want to generate : ");
	scanf("%d",&max);
	loopUntilMax(max);
	printf("\n");
}

