#include "main.h"

/**
 * rot13 - String function
 *
 * Description: leet
 * @str: String
 *
 * Return: 0.
 */
char *rot13(char *str)
{
	int i, j;
	int str_size, le_size;
	char le[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char e[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str_size = strlen(str);
	le_size = strlen(le);
	for (i = 0 ; i < str_size ; i++)
	{
		for (j = 0 ; j < le_size ; j++)
		{
		if (str[i] == le[j])
		{
			str[i] = e[j];
			break;
		}
		}
	}
		return (str);
}
