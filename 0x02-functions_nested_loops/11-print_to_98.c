#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: Prints natural numbers to 98
 * @n: Argument
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i = n;
	int temp=n;

	while (i < 99)
	{
		if (i < 0)
		{
			temp = -1 * i;
			write(1, "-", 1);
		}
		_putchar((temp / 10) + '0');
		_putchar((temp % 10) + '0');
		if (i < 98)
		{
		write(1, ",", 1);
		write(1, " ", 1);
		}
		if (n <= 98)
			i++;
		else
			i--;
	}
	write(1, "\n", 1);
}
