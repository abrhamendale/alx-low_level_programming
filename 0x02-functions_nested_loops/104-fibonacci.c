#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int f1 = 1;
	int f2 = 2;
	unsigned int f3;

	printf("1, 2, ");
	for(i = 0 ; i < 98 ; i++)
	{
		f3 = f1 + f2;
		printf("%u, ", f3);
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
	return (0);
}
