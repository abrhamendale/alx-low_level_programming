#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: Print diagonal line
 * @n: number of times to print \
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1 ; i <= n ; i++)
	{
		for (j = 1 ; j < i ; j++)
			_putchar(32);
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');
}
