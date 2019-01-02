#include <stdio.h>
double powerFunction(double number,double power){
	double c = number;
	while(power>1){
		c*=number;
		power--;
	}
	return c;
}
double factorialFunction(double number){
	double i = number-1;
	while(i>=1){
		number*=i;
		i--;
	}
	return number;
}
void main(){
	double number;
	printf("Enter the number x to be given to the exponential function : ");
	scanf("%lf",&number);
	double exp;
	printf("Enter up to how many iterations to count to : ");
	scanf("%lf",&exp);
	double exponent = 0;
	double r = 0;
	double fact = 0;
	long double val = 0;
	for(long i=0;i<exp;i++){
		r = powerFunction(number,i);
		fact = factorialFunction(i);
		if(fact>r*15) break;
		if(i==0) val = 1;
		else val = r/fact;
		exponent += val;
	}
	printf("%f is the exponential function result of the given number \n",exponent);

}
