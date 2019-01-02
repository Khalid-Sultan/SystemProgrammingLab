#include "head.h"
#define MAX 256
#define double(x) (x+x)
int add(int x, int y);
void main(){
	int x = 25;
	int y = 35;
	int result = add(x,y);
	int x2 = double(x);
	int y2 = double(y);
	int z = MAX + 5;
}
int add(int x, int y){
	int result = x+y;
	return result;
}
