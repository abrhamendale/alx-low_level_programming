#include "main.h"

/**
 * str_concat - Entry point
 *
 * Description: Creates a string
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: string array
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	s = malloc(strlen(s1) + strlen(s2));
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	s = strcpy(s, s1);
	strcat(s, s2);
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
