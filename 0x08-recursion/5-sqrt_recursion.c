#include "main.h"

/**
 * _sqrt_recursion - Entry point
 *
 * Description: Prints a string
 * @n: Input number
 *
 * Return: Nothing
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

int square(int n, int i)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0 || i == n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (square(n, i + 1));
}
