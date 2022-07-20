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
	if (s == "")
		_putchar(*s);
	if (strlen(s) - 1 == 0)
	{
		_putchar(*s);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
