#include <stdio.h>

int main()
{
	int i = 5, j = 6;
	int k = 8;
	printf("i&&j:%d\n", i && j);
	printf("i||j:%d\n", i || j);
	printf("!j:%d\n",  !j);
	printf("!i:%d\n",  !i);

	if ( i || k++)
	{
		printf("INside if loop\n");
	}	
	printf("Value of i is %d\t value of k is %d\n", i, k);

}
