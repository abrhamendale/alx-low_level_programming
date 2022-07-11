#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: Prints a string in reverse
 * @s: Input string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	for (i = 63 ; i >= 0 ; i--)
		putchar (s[i]);
	putchar ('\n');
}
