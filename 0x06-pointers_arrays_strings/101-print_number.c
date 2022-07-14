#include "main.h"

/**
 * print_number - Print number function
 *
 * Description: Prints integer
 * @n: Input integer
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int q;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	q = n;
	if (q / 10 != 0)
		print_number(q / 10);
	_putchar(n % 10 + '0');
}

