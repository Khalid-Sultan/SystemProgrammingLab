#include <stdio.h>

void main(){
	short int i1 = -5421;
	printf("Signed Short Integers like %hd have a constant memory size of %ld bytes\n",i1, sizeof(i1));
	unsigned short int i2 = -i1;
	printf("Unsigned Short Integers like %hd have a constant memory size of %ld bytes\n",i2, sizeof(i2));
	int i3 = -54652;
	printf("Signed Integers like %d have a constant memory size of %ld bytes\n",i3,sizeof(i3));
	unsigned i4 = -i3;
	printf("Unsigned Integers like %d have a constant memory size of %ld bytes\n",i4, sizeof(i4));	
	long int i5 = -85462854;
	printf("Signed Long Integers like %ld have a constant memory size of %ld bytes\n",i5, sizeof(i5));
	unsigned long int i6 = -i5; 
	printf("Unsigned Long Integers like %ld have a constant memory size of %ld bytes\n",i6, sizeof(i6));	
	long i7 = -52461516546564;
	printf("Signed Longs like %ld have a constant memory size of %ld bytes\n",i7, sizeof(i7));
	unsigned long i8 = -i7;
	printf("Unsigned Longs like %ld have a constant memory size of %ld bytes\n", i8, sizeof(i8));


	float f1 = 1.865845468574865;
	printf("Floating point Integers like %f have a constant memory size of %ld bytes\n",f1, sizeof(f1));
	double f2 = 2.532876953421308745;
	printf("Decimal point Integers like %f have a constant memory size of %ld bytes\n",f2, sizeof(f2));

	char c1 = 'a';
	printf("Directly assigned Character values like %c and have a constant size of %ld bytes \n",c1, sizeof(c1));
	char c2 = 65;
	printf("Indirectly assigned Character Values like %c and have a constant memory size of %ld bytes \n",c2, sizeof(c2));
	char c3[] = "Hello world";
	printf("Strings in C like %s have a memory size dependent on the size of the character array and memory size of the character. This one has a memory size of %ld bytes \n",c3, sizeof(c3));

}
