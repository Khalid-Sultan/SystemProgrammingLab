#include <stdio.h>

int reverseNumber(int number);

void main(){
	printf("Please give me a number : ");
	int d;
	scanf("%d", &d);
	int reverse = reverseNumber(d);
	printf("The reverse of %d is %d \n",d,reverse);
	printf("Double that and you get %d \n", 2*reverse);
}
int countDigits(int number){
	int counter = 0;
	while(number>0){
		number/=10;
		counter+=1;
	}
	return counter;
}
int powerFunction(int number,int times){
	int result = number;
	while(times>1){
		result*=number;
		times--;
	}
	return result;
}
int reverseNumber(int number){
	int digits = countDigits(number);
	int reverse = 0;
	while (number>0){
		int lastDigit = number%10;
		reverse += lastDigit * powerFunction(10,digits);
		digits--;
		number/=10;
	}
	return reverse/10;
}
