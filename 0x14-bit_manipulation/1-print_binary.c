#include "main.h"

/**
 * print_binary - Returns unsigned int equivalent of binary
 *
 * @n: Integer input
 *
 * Returns: Binary equivalent
 */
void print_binary(unsigned long int n)
{
	int c, binry, z = 0;

	if (n == 0)
		_putchar("0");
	for (c = 31 ; c >= 0 ; c--)
	{
		binry = n >> c;
		if (binry & 1)
		{
			_putchar('1');
			z = 1;
		}
		else
		{
			if (z == 1)
				_putchar('0');
		}
	}
}
