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
	s = malloc(strlen(str) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
