#include <stdio.h>

#define SET_BIT(NUMBER, BIT) (NUMBER |= (1<<BIT))
#define CLEAR_BIT(NUMBER,BIT) (NUMBER &= ~(1<<BIT))
#define TOGGLE_BIT(NUMBER,BIT) (NUMBER ^= (1<<BIT))
#define IS_BIT_SET(NUMBER, BIT) ((NUMBER >> BIT) & 1)
#define IS_BIT_CLEAR(NUMBER,BIT) !((NUMBER >> BIT) & 1)
int main()
{
	int number = 10;
	int bit;
	scanf("%d", &bit);
	//printf("O/P:%d\n", SET_BIT(number, bit));
	//printf("CLEAR BIT %d\n",CLEAR_BIT(number,bit));
	//:printf("TOGGLE BIT %d\n",TOGGLE_BIT(number,bit));
	printf("IS_BIT_CLEAR %d\n",IS_BIT_CLEAR(number,bit));
}
