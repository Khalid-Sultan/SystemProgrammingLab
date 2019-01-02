#include <stdio.h>
#define toFarenheit(temp) ((temp*9)/5+32)
#define toCelcius(temp) ((temp-32)*5/9)

void main(){
	printf("Welcome to the temprature conversion tool written in C.\n");
	printf("Please choose from the following options \n");
	printf("\t 1 - Celcius to Farenheit \n");
	printf("\t 2 - Farenheit to Celcius \n");
	char c = '0';
	scanf("%c",&c);
	if(c=='1'){
		printf("You chose to convert a given Celcius degree to Farenheit\n");
		printf("Input the degree in celcius please : ");
		float degree;
		scanf("%f",&degree);
		printf("The farenheit equivalent is %.2f degrees. \n",toFarenheit(degree));
		return;
	}
	else if(c=='2'){
		printf("You chose to convert a given Farenheit degree to Celcius\n");
		printf("Input the degree in farenheit please : ");
		float degree;
		scanf("%f",&degree);
		printf("The celcius equivalent is %.2f degrees. \n",toCelcius(degree));
		return;
	}
	else{
		printf("You chose an invalid option \n");
	}
}
