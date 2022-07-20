#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * Description: Prints a string
 * @s: Input string
 *
 * Return: Nothing
 */
int _strlen_recursion(char *s)
{
	int l;

	if (strlen(s) == 0)
	{
		l = 0;
		return (0);
	}
	if (strlen(s) - 1 == 0)
	{
		l = 1;
		return (l);
	}
	l = _strlen_recursion(s + 1);
	l++;
	return (l);
}
