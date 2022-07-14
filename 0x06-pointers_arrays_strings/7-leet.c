#include "main.h"

/**
 * leet - String function
 *
 * Description: leet
 * @str: String
 *
 * Return: 0.
 */
char *leet(char *str)
{
	int i, j;
	int str_size, le_size;
	char le[] = "AaEeOoTtLl";
	char e[] = "4433007711";

	str_size = strlen(str);
	le_size = strlen(le);
	for (i = 0 ; i < str_size ; i++)
	{
		for (j = 0 ; j < le_size ; j++)
		{
		if (str[i] == le[j])
			str[i] = e[j];
		}
	}
		return (str);
}
