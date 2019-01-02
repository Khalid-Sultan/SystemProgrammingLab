#include <stdio.h>
#define MINIMUM_WAGE 8.00
#define MAXIMUM_HOURS 60

float calculateSalary(float basePay, int hours);
int checkBasePay(float basePay);
int checkHours(int hours);

void main(){
	float basePay;
	int hours;
	float overtime;
	printf("Please Enter the Base Pay for your employee");
	scanf("%f",&basePay);
	if(checkBasePay(basePay)==0){
		return;
	}
	printf("How many hours has he/she worked today");
	scanf("%d",&hours);
	if(checkHours(hours)==0){
		return;
	}
	printf("This employee has worked %d hours with %f Base Pay",hours,basePay);
	printf("The salary equates to %f",calculateSalary(basePay,hours));
}
float calculateSalary(float basePay, int hours){
	float baseSalary = 0.0;
	float overTime = 0.0;
	if(hours<=40){
		baseSalary = basePay * hours;
		return baseSalary;
	}
	else{
		baseSalary = basePay * 40;
		overTime = basePay * 1.5 * (hours-40);
		return baseSalary + overTime;
	}
}
int checkBasePay(float basePay){
	if (basePay<MINIMUM_WAGE){
		printf("The base pay must not be less than the minimum wage");
		return 0;
	}
	return 1;
}
int checkHours(int hours){
	if(hours>MAXIMUM_HOURS){
		printf("An employee is not allowed to work more than 60 hours per week");
		return 0;
	}
	return 1;
}
