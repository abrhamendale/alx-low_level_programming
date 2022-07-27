#include "main.h"

/**
 * _strdup - Entry point
 *
 * Description: Creates a string
 * @str: Input string
 *
 * Return: string array
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
