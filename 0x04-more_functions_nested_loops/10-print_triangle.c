#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: Prints  triangles
 * @size: Argument
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i + j < (size - 1))
			_putchar(' ');
			if ((i + j) >= (size - 1))
			_putchar('#');
		}
	_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
