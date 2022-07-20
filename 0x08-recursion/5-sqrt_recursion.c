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

/**
 * square - Function
 *
 * Description: Calculates the square of a number
 * @n: The number whose root is to be calculated
 * @i: Count
 *
 * Return: The square root
 *
 */
int square(int n, int i)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0 || i == n)
		return (-1);
	if (i * i == n)
	{
		return (i);
	}
	return (square(n, i + 1));
}
