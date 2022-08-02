#include "main.h"

/**
 * string_nconcat - Allocates memory using malloc
 *
 * @s1: Input string
 * @s2: Second input string
 * @n: Number of elements to concatenate from the second string
 *
 * Return: Created string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1, l2;
	char *c;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
		n = l2;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	c = malloc(sizeof(char) * (l1 + n + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < l1 ; i++)
	{
		c[i] = s1[i];
	}
	for (; i < n + l1 ; i++)
	{
		c[i] = s2[i - l1];
	}
	c[i] = '\0';
	return (c);
}
