#include <stdio.h>
#include "hello.h"
#include "hello.h"

#define DEBUG

// Single line macros
#define PI 3.14
#define ADD(a, b) (a+b)
#define MUL(a) (2*a)

//Multi line macros
#define SWAP(a,b) { \
		  int temp; \
		  temp = a; \
		  a = b; \
		  b = a; \
		} 

#define SQUARE(a) (a * a)

#ifdef DEBUG
	#define MYDEBUG() printf("%s%d\n", __func__, __LINE__);
#else
	#define MYDEBUG() 
#endif


void myfunc(int a, int b);

void myfunc(int a, int b)
{
	printf("a is %d\n, b is %d\n", a, b);
	SWAP(a,b);
        a = SQUARE(a);
	printf("Square of a is %d\n",a);
}

void myfunc1()
{
	printf("myfunc1\n");
	MYDEBUG();
}

void myfunc2(void)
{
	printf("%s\n", __func__);
	printf("%d\n", __LINE__);
}

int main(int argc, char *argv[])
{
	myfunc1(2, 3, 4, 5, 6, 7);
	myfunc2();
	/*printf("Hello World\n");
	myfunc(3, 4);
	myfunc(2, 3);
	printf("argc:%d\t argv[0]:%s\n", argc, argv[0]);
	printf("PI:%fn", PI);
	printf("Add(3,4):%d\n", ADD(3,4));
	printf("Multiply:%d\n", ADD(3,4)*MUL(2));
	*/
	return 0;
}
