#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description: Prints a string in reverse
 * @s: Input string
 *
 * Return: 0
 */
void puts2(char *s)
{
	int i;

	for (i = strlen(s) - 1 ; i >= 0 ; i--)
	{
		if (s[strlen(s) - 1 - i] % 2 == 0)
		putchar (s[strlen(s) - 1 - i]);
	}
	putchar ('\n');
}
