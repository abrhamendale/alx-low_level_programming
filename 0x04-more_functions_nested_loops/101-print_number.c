#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 *
 * Description: Prints integers
 * @n: Input number
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		n = -1 * n;
		i = n;
		_putchar('-');
	}
	i = i / 10;
	if (i != 0)
		print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}
