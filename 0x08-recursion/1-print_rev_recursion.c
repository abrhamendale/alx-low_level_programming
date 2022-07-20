#include "main.h"

/**
 * _print_rev_recursion - Entry point
 *
 * Description: Prints a string
 * @s: Input string
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar(*s);
		return;
	}
	if (strlen(s) - 1 == 0)
	{
		_putchar(*s);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
