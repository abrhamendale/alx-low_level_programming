#include "main.h"
/**
 * str_concat - Entry point
 * Description: Creates a string
 * @s1: First input string
 * @s2: Second input string
 * Return: string array
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i;

	i = 0;
	if (s1 == NULL && s2 == NULL)
	{
		s1 = s2 = "";
		s = malloc(sizeof(char));
	}
	else if (s1 == NULL && s2 != NULL)
	{
		s = malloc((1 + strlen(s2)) * sizeof(char));
	}
	else if (s2 == NULL && s1 != NULL)
	{
		s = malloc((strlen(s1) + 1)* sizeof(char));
	}
	else
	{
		s = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	while (i < strlen(s1) + strlen(s2))
	{
		s[i] = s2[i - strlen(s1)];
		i++;
	}
	s[i] = '\0';
	return (s);
	}
