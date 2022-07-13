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
		if (str[i] == '\t')
			str[i] = ' ';
		if(!isalnum(str[i]))
		{
			if (str[i] != '-')
			str[i + 1] =  toupper(str[i + 1]);
		}
	}
		return (str);
}


