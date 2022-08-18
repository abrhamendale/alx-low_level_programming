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
	int i, k;

	if (n == 0)
		_putchar('0');
	for (k = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			k = 1;
		}
		if (k == 1)
		{
			if ((n >> i) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
