#include <stdio.h>

#define IS_NUMBER_EVEN(number) !(number & 0x1)
#define IS_NUMBER_ODD(number)  (number & 0x1)
int main()
{
	int number;
	scanf("%d", &number);
	if (IS_NUMBER_EVEN(number))
 		printf("EVEN NO\n");
	else if (IS_NUMBER_ODD(number))
		printf("ODD no\n");
	return 0;
}
