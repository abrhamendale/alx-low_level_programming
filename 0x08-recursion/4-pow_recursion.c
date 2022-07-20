#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: Prints a string
 * @x: Input number
 * @y: Input number
 *
 * Return: Nothing
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
