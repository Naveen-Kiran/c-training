#include <stdio.h>

#define EXTRACT_LOWER_NIBBLE(number)  (number & 0x0f)
#define EXTRACT_HIGHER_NIBBLE(number) ((number>>4) & 0xf)

int main()
{
	char number = 0x56;
	printf("lower nibble in given number is %d\n",EXTRACT_LOWER_NIBBLE(number));
	printf("higher nibble in given number is %d\n",EXTRACT_HIGHER_NIBBLE(number));
	return 0;
}
