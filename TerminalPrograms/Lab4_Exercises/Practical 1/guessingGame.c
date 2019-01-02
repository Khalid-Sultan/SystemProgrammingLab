#include <stdio.h> /** included to allow for printf() to be used*/
#include <time.h> /** included to allow time() to be used*/
#include <stdlib.h> /** include to allow rand() and srand() to be used*/
int main() {
	// variables declarations
	int x; /** variable to hold our random integer*/
	srand(time(NULL)); /** seeds our random number generator. Do this just once */
	x = rand()%50;
	printf("The mystery number is generated and is between 1 and 50.\n");
	int counter = 5;
	while(counter>0){
		int y;
		printf("Guess the number : ");
		scanf("%d",&y);
		counter--;
		if(x==y){
			printf("Congratulations you guessed right.\n");
			return 0;
		}
		else if(y>x)	printf("You guessed High. \n");
		else if(y<x)	printf("You guessed Low. \n");
		continue;
	}
	printf("Sorry You Lost. The number was actually %d\n",x);
}
