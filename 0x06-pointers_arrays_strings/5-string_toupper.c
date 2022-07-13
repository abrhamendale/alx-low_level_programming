#include "main.h"

/**
 * string_toupper - String function
 *
 * Description: Compares two strings
 * @str: String
 *
 * Return: 0.
 */
char *string_toupper(char *str)
{
	int i;
	int size;

	size = sizeof(*str) / sizeof(str[0]);
	for (i = 0 ; i < size ; i++)
		str[i] =  toupper(str[i]);
	return (str);
}
