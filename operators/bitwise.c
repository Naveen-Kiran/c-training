#include <stdio.h>

int main()
{
	int a = 3;
	int b = 4;
	int c;
	c = a &b;
	printf("value of c is %d\n", c);
	c = a && b;
	printf("value of c is %d\n", c);
	c = a | b;
	printf("value of c is %d\n", c);
	c = a || b;
	printf("value of c is %d\n", c);
	c = a ^ b;
	printf("value of c is %d\n", c);
	c = ~a;
	printf("value of c is %u\n", c);
}
