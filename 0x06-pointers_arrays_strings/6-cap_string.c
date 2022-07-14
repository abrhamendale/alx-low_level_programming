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
	str[0] = toupper(str[0]);
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
	}
		return (str);
}


