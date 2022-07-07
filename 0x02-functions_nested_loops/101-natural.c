#include <stdio.h>
#include <stdlib.h>

/**
 * naturaln - Entry point
 *
 * Description: Prints natural numbers
 *
 * Return: Always 0
 */
void naturaln(void)
{
	int i = 0;
	int sum;

	while ((i * 3) < 1025 && (i * 5) < 1025)
	{
		sum = sum + (i * 3) + (i * 5);
		i++;
	}
	printf("%d \n", sum);
}
