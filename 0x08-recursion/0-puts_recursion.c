#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: Prints a string
 * @s: Input string
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
