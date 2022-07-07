#include "main.h"
#include <limits.h>
#include <unistd.h>

/**
 * print_last_digit - Entry point
 *
 * Description: Prints last digit
 * @n: Argument
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	char i;
	int r;

	if (n < 0)
	n = -1 * n;
	r = n % 10;
	i = (n % 10) + '0';
	if (n == INT_MIN)
	{
		i = 8 + '0';
		r = 8;
	}
	write(1, &i, 1);
	return (r);
}

