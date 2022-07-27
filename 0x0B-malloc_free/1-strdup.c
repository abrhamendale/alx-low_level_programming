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
	
	s = malloc(strlen(str) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
