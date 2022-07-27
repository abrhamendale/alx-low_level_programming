#include "main.h"

/**
 * create_array - Entry point
 *
 * Description: Creates a string
 * @size: Size of the array
 * @c: Character to initialize the array
 *
 * Return: string array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;
	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (malloc(sizeof(char) * size) == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
