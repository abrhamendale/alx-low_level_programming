#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: Prints a line
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		_putchar('_');
	_putchar('\n');
}
