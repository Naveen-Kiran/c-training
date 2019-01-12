#include <stdio.h>

int main()
{
	int a , b, c;
	printf("Enter a \n");
	scanf("%d", &a);
	printf("Enter b:\n");
	scanf("%d", &b);

	c = (a>b)?a:b;
	printf("Greater value is %d\n", c);
}
