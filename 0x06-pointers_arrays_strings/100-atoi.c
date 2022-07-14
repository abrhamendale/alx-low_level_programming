#include "main.h"

/**
 * _atoi - Print number function
 *
 * Description: Prints integer
 * @s: Input string
 *
 * Return: Nothing
 */
int _atoi(char *s)
{
	unsigned int n;
	int i, j;
	int l, m;

	l = (int)strlen(s);
	for (i = l ; i >= 0 ; i--)
	{
	if (s[i] == 0 - 9)
	{
		if (i == l)
			n = s[i];
	for (j = 1 ; j >= l - i ; j++)
	{
		m = m * 10;
	}
		n = n + (s[i] * m);
	}
	}
	return (n);
}

