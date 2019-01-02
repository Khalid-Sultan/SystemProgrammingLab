#include <stdio.h>
#define x 0x66
#define y 0x39

void main(){
	printf("Here is x&y %d\n",x&y);
	printf("Here is x&&y %d\n",x&&y);
	printf("Here is x|y %d\n",x|y);
	printf("Here is x||y %d\n",x||y);

	printf("Here is x&!y %d\n",x&!y);
	printf("Here is x&&~y %d\n",x&&~y);
	printf("Here is ~x|~y %d\n",~x|~y);
	printf("Here is !x||!y %d\n",!x||!y);
}
