#include <stdio.h>

int main()
{
	int i = 5, j;

	printf("Pre increment:%d\n", ++i);
	printf("Post increment:%d\n", i++);
	printf("Pre decrement:%d\n", --i);
	printf("Post decrement:%d\n", i--);
	
	//i = 5
	j = i++;
	printf("value of i :%d  j is %d\n", i, j);
	j = ++i;
	printf("value of i :%d  j is %d\n", i, j);
	j = --i;
	printf("value of i :%d  j is %d\n", i, j);
	j = i--;
	printf("value of i :%d  j is %d\n", i, j);



}
