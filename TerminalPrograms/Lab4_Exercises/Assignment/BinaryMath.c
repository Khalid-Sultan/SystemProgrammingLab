#include <stdio.h>
#include <stdlib.h>

// Binary Math Calculator in C.
// Given an input of two binary numbers with an operation in the middle,
// It will calculate that operation and return that result in binary format.
// Developed By:- Khalid Sultan     -       ATR/8444/09     -       Section-2 (Regular)
// Date Modified:- Monday, December 24, 2018  8:09:45 PM.


// To check the number if it has characters other than 0 and 1.
int checkAllNumbers(char* firstElementPointer, int arraySize){
    int i;
	for(i=0;i<arraySize;i++){
		char currentCharacter = *(firstElementPointer + i);
		if( currentCharacter=='0' || currentCharacter=='1'){
			continue;
		}
		else{
			printf("THIS WAS THE CULPRIT %c\n",currentCharacter);
			return 0;
		}
	}
    return 1;
}

// To check the number if it exceeds the size bounds.
int checkNumberArray(char* firstElementPointer, int arraySize){
	char initialChar = *(firstElementPointer);
	if(checkAllNumbers( firstElementPointer,arraySize)==0) return 3;
	if((arraySize==15) && (initialChar=='1')) return 2;
	else if((arraySize<=14) && (arraySize>=1)) return 1;
	else return 0;
}

// To change it from a binary to a decimal number
int powerFunction(int i){
	int temp = 1;
	int z;
	for(z=0; z<=i;z++){
		temp*=2;
	}
	return temp;
}
// To change it from decimal to a binary sequence.
int binPowerFunction(int i){
	int temp = 1;
	if(i==0){
		return temp;
	}
	int z;
	for(z=1; z<=i;z++){
		temp*=2;
	}
	return temp;
}
// To change it from decimal to a binary Sequence.
int getNumber(char* firstElementPointer, int arraySize){
	int number = 0;
	int i;
	for(i=0;i<=arraySize;i++){
		char c2 = *(firstElementPointer+i);
		char* x = &(c2);
		int j = atoi(x);
		int p = j * powerFunction(arraySize-2-i);
		number += p;
	}
	return number;
}

// To get the size of the first part.
int getFirstNumberSize(int i){
	return i;
}
// To get the size of the second part
int getSecondNumberSize(char* locationOfOperation){
	int size = 0;
	int a = 0;
	while(a==0){
	    if( (*(locationOfOperation)!='0') && (*(locationOfOperation)!='1') ){
	        if( (*(locationOfOperation)!=10)){
		    	size = 1000;
		    	break;
			}
	        break;
	    }
	    size+=1;
	    locationOfOperation+=1;
	}
	return size;
}

// To fill the first array with their appropriate significants.
void fillUpTheFirstArray(char* newArray, char* originalArrayFirstElement, int size){
	int i = 0;
	while(i<size){
		*(newArray+i) = *(originalArrayFirstElement+i);
		i++;
	}
}
// To fill the second array with their appropriate significants.
void fillUpTheSecondArray(char* newArray, char* originalArrayFirstElement, int size, int operationLocation){
	int i = 0;
	while(i<size){
		*(newArray+i) = *(originalArrayFirstElement+i+operationLocation+1);
		i++;
	}
}

// To convert the decimal number into a binary sequence
void convertToBinary(int result){
	int i = 0;
	int positiveOrNot = 1;
	if(result<0){
		positiveOrNot = -1;
		result*=-1;
	}
	char initialCharArray[14];
	int charCounter=0;
	if(result>binPowerFunction(14)){
	    printf("BitOverFlow Error. The result encountered more than 14 bits.\n");
            return;
	}
	for(i=13;i>=0;i--){
		int pow = binPowerFunction(i);
		if(result==0){
			initialCharArray[i] = '0';
			charCounter++;
			continue;
		}
		if(result-pow>=0){
			result-=pow;
			initialCharArray[i] = '1';
			charCounter++;
			continue;
		}
		else{
			initialCharArray[i] = '0';
			charCounter++;
		}
	}
	int r = 0;
	int s = 0;
	char finalArray[charCounter];
	for(r=0, s=13;r<charCounter,s>=(14-charCounter);r++,s--){
		finalArray[r] = initialCharArray[s];
	}
	if(positiveOrNot==-1){
			finalArray[0] = '1';
	}
	else{
			finalArray[0] = '0';
	}
	printf("The binary format of the result is %s \n",finalArray);
}

// To check if the user wants to quit the program.
int checkQuiting(char q, char u, char i, char t){
    if(   (q=='q') &&  (u=='u') &&  (i=='i')  &&  (t=='t') ){
        return 1;
    }
    if(   (q=='e') &&  (u=='x') &&  (i=='i')  &&  (t=='t') ){
        return 1;
    }
    return 0;
}
int checkSizes(int size){
	if(size==0){
		return 1;
	}
	return 0;
}
// To clear the string to an array filled with empty characters
void fillWithEmptyValues(char* c, int size){
    int i;
    for(i=0;i<size;i++){
        *(c+i)='\0';
    }
}
void main(){
    printf("Welcome to Binary Math in C. Input quit or exit to leave the program\n");
    int checker = 0;

    while(checker==0){

        char c[100];
		fillWithEmptyValues(&(c[0]),100);
        char operation = ' ';
	    printf("\nInput the arithmetic (exit or quit - to leave): ");
		int found = 0;
		fgets(c,100,stdin);
        printf("Original Statement - %s \n\n",c);
        int i;
        int k = checkQuiting(c[0],c[1],c[2],c[3]);
        if (k==1){
            printf("You quited the program. \n");
            break;
        }
        for(i=0;i<100;i++){
            if(c[i]=='+' || c[i]=='-' || c[i]=='*' || c[i]=='/' || c[i]=='%'){
                operation = c[i];
		        found = 1;
                printf("Operation found %c at location %d. \n",operation,i);
                int firstNumberSize = getFirstNumberSize(i);
                if(firstNumberSize>15)    {
                    printf("The first number should have a length between 1 and 14. Or a length of 15 with the first element with a value of 1.\n");
                    break;
                }
                int secondNumberSize = getSecondNumberSize(&(c[i])+1);
                if(secondNumberSize==1000){
                    printf("Invalid Character found on the second number. \n");
                    break;
                }
                char firstNumber[firstNumberSize];
                char secondNumber[secondNumberSize];
				if(checkSizes(firstNumberSize)==1){
					printf("The first number should have a length between 1 and 14. Or a length of 15 with the first element with a value of 1.\n");
                    break;
				}
				if(checkSizes(secondNumberSize)==1){
					printf("The second number should have a length between 1 and 14. Or a length of 15 with the first element with a value of 1.\n");
                    break;
				}

				fillWithEmptyValues(&(firstNumber[0]),firstNumberSize);
				fillWithEmptyValues(&(secondNumber[0]),secondNumberSize);

                fillUpTheFirstArray(&(firstNumber[0]),&(c[0]),firstNumberSize);
                fillUpTheSecondArray(&(secondNumber[0]),&(c[0]),secondNumberSize,i);
                printf("Before Conversion to Decimal format the original given values were \n\t First number - %s \n\t Second number - %s \n", firstNumber, secondNumber);

                int n = checkNumberArray(&(firstNumber[0]),firstNumberSize);
                int firstNumberParity = 1;
                if(n==0)    {
                    printf("The first number should have a length between 1 and 14. Or a length of 15 with the first element with a value of 1.\n");
                    break;
                }
                else if(n==2) {
                    firstNumberParity *= -1;
                }
                else if(n==3) {
                    printf("The first number involved characters other than 0 and 1.\n ");
                    break;
                }
                int n2 = checkNumberArray(&(secondNumber[0]),secondNumberSize);
                int secondNumberParity = 1;
                if(n2==0)    {
                    printf("The second number should have a length between 1 and 14. Or a length of 15 with the first element with a value of 1.\n");
                    break;
                }
                else if(n2==2) {
                    secondNumberParity *= -1;
                }
                else if(n2==3) {
                    printf("The second number involved characters other than 0 and 1.\n ");
                    break;
                }
                else{
                    int first = 0;
                    int second = 0;
                    first = getNumber(&(firstNumber[0]),firstNumberSize) * firstNumberParity;
                    second = getNumber(&(secondNumber[0]),secondNumberSize) * secondNumberParity;
                    if(firstNumberParity==-1){
                        printf("Found a negative integer \n");
                        first = getNumber(&(firstNumber[1]),firstNumberSize-1) * firstNumberParity;
                    }
                    if(secondNumberParity==-1){
                        second = getNumber(&(secondNumber[1]),secondNumberSize-1) * secondNumberParity;
                    }
                    printf("After Conversion to Decimal format the values were \n\t First number - %d \n\tSecond number - %d \n", first, second);
                    int result = 0;
                    switch (operation){
                        case '+':
                            result = first + second;
                            printf("The result of the operation in decimal is %d \n",result);
                            convertToBinary(result);
                            break;
                        case '-':
                            result = first - second;
                            printf("The result of the operation in decimal is %d \n",result);
                            convertToBinary(result);
                            break;
                        case '*':
                            result = first * second;
                            printf("The result of the operation in decimal is %d \n",result);
                            convertToBinary(result);
                            break;
                        case '/':
                            if(second==0){
                                printf("It is impossible to divide a given number by 0\n");
                                break;
                            }
                            result = first / second;
                            printf("The result of the operation in decimal is %d \n",result);
                            convertToBinary(result);
                            break;
                        case '%':
                            if(second==0){
                                printf("It is impossible to divide a given number by 0\n");
                               break;
                            }
                            result = first % second;
                            printf("The result of the operation in decimal is %d \n",result);
                            convertToBinary(result);
                            break;
                        default:
                            printf("Invalid operation given.\n");
	                    break;
                    }
                }
            }
        }
	    if( (found==0)){
			printf("Operation was not given.\n");
			continue;
       	}
    }
}
