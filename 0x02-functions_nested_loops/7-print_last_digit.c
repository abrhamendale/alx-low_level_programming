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

	if (n < 0)
	n = -1 * n;
	i = (n % 10) + '0';
	write(1, &i, 1);
	return (n % 10);
}

