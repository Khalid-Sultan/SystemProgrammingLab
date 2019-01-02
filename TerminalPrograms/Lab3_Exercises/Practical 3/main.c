#include <stdio.h>
#include "head.h"

void swap();
void display();
int array[2] = {25,50};
void main(){
	printf("\n Before Swap\n");
	display();
	swap();
	printf("\n After Swap\n");
	display();
}
