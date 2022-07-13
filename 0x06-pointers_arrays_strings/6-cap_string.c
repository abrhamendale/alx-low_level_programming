#include "main.h"

/**
 * cap_string - String function
 *
 * Description: Compares two strings
 * @str: String
 *
 * Return: 0.
 */
char *cap_string(char *str)
{
	int i;
	int size;

	size = strlen(str);
	for (i = 0 ; i < size ; i++)
	{
		if (i != size - 1)
		{
		if (str[i] == '!' || str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '?' || str[i] == '"' || str[i] == '('
				|| str[i] == ')' || str[i] == '{' || str[i] == '}'
				|| str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			str[i + 1] =  toupper(str[i + 1]);
		}
		if (str[i] == '\t')
			str[i] = ' ';
	}
		return (str);
}


