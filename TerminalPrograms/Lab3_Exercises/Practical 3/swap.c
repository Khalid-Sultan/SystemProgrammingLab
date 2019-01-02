#include <stdio.h>
#include "head.h"

void swap(){
	int temp = array[0];
	array[0] = array[1];
	array[1] = temp;
}

void display(){
	printf("\n Element 0 : %d \n", array[0]);
	printf("\n Element 1 : %d \n", array[1]);
}
