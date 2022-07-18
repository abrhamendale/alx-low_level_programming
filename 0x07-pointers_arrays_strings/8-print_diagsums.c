#include "main.h"

/**
 * print_diagsums - Entry point
 *
 * Description: Locates a charcter in a string
 * @a: Character array
 * @size: Size of the input array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	unsigned long int sum;
	int i, j;

	sum = 0;
	if (size)
	{
		for (i = 0 ; i <= (size * size) ;)
		{
			sum += a[i];
			i = i + size + 1;
		}
		printf("%lu, ", sum);
		sum = 0;
		for (j = size - 1 ; j <= (size * size) - size ;)
		{
			sum += a[j];
			j = j + size - 1;
		}
		printf("%lu\n", sum);
	}
}
