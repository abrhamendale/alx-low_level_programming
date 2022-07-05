#include "main.h"
#include <unistd.h>

/**
 * print_sign - Entry point
 *
 * Description: Prints the sign of numbers
 * @n: argument
 *
 * Return: 0
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		write(1, "+", 1);
		i = 1;
	}
	if (n == 0)
	{
		write(1, "0", 1);
		i = 0;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		i = -1;
	}
		return (i);
}
