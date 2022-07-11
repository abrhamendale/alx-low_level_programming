#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: Prints a string in reverse
 * @s: Input string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i;
	char temp;

	for (i = (strlen(s) - 2) / 2 ; i >= 0 ; i--)
	{
		temp = s[strlen(s) - 1 - i];
		s[strlen(s) - 1 - i] = s[i];
		s[i] = temp;
	}
}
