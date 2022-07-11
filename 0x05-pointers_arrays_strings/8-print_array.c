#include "main.h"

/**
 * print_array - Entry point
 *
 * Description: Prints a number of characters of a string
 * @a: Input string
 * @n: Number of characters
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i <= n - 1 ; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
	}
	putchar('\n');
}
