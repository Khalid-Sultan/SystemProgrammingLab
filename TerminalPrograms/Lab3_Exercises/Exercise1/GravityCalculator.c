#include <stdio.h>
double getFinalPosition(double initialPosition,double acceleration, double fallingTime, double initialVelocity);
void main(){
	double gravity = -9.81; //Earth's gravity in m/s^2
	double initialVelocity = 0.0;
	double fallingTime = 10.0;
	double initialPosition = 0.0;
	double finalPosition = getFinalPosition(initialPosition,gravity,fallingTime,initialVelocity);
	printf("\nThe object's position after %f seconds is %f meters\n", fallingTime,finalPosition);
}
double getFinalPosition(double initialPosition,double acceleration,double fallingTime, double initialVelocity){
	double finalPosition = (0.5 * acceleration * fallingTime * fallingTime) + (initialVelocity * fallingTime) + (initialPosition);
	return finalPosition;
}
