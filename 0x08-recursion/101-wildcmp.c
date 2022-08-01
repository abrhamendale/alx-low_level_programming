#include "main.h"

/**
 * wildcmp - Entry point
 *
 * Description: Prints string
 * @s1: Input string
 * @s2: Input string
 *
 * Return: Nothing
 */
int wildcmp(char *s1, char *s2)
{
	int c = 0;

	if (strlen(s1) == 0 && strlen(s2) == 0)
		return (1);
	if (strlen(s1) == 0 && *s2 == '*' && strlen(s2) == 1)
		return (1);
	else if (strlen(s1) == 0 && strlen(s2) != 0)
		return (0);
	if ((*s1 == *s2) && strlen(s1) != 0)
	{
		c = 1;
		return (c * wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		if (strlen(s2) - 1 == 0)
			return (1);
		else
			return (wild(s1, s2 + 1));
	}
	else
		return (0);
}
/**
 * wild - Function
 *
 * Description: Calculates the square of a number
 * @s1: Input string
 * @s2: Input string
 *
 * Return: The square root
 *
 */
int wild(char *s1, char *s2)
{
	if ((strlen(s1) == 0 && strlen(s2) != 0 && *s2 != '*')
			|| (strlen(s1) != 0 && strlen(s2) == 0 && *s2 != '*'))
		return (0);
	else if (strlen(s1) == 0 && strlen(s2) == 0)
		return (1);
	if (*s1 == *s2)
	{
		if ((strlen(s1) == strlen(s2)) == 1)
			return (1);
		return (wild(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		if (strlen(s2) - 1 == 0)
			return (1);
		else
			return (wild(s1, s2 + 1));
	}
	else
		return (wild(s1 + 1, s2));
}
