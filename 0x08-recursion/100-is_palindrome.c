#include "main.h"

/**
 * is_palindrome - Entry point
 *
 * Description: Prints string
 * @s: Input string
 *
 * Return: Nothing
 */
int is_palindrome(char *s)
{
	return (palindrome(s, 0));
}

/**
 * palindrome - Function
 *
 * Description: Calculates the square of a number
 * @s: The string to be checked
 * @i: Count
 *
 * Return: The square root
 *
 */
int palindrome(char *s, unsigned int i)
{
	if (strlen(s) % 2 == 0 && i == strlen(s))
		return (1);
	if (strlen(s) % 2 != 0 && i == (strlen(s) / 2) + 1)
		return (1);
	if (*(s + i) != *(s + strlen(s) - 1 - i))
		return (0);
	if (strlen(s) == 0)
		return (0);
	return (palindrome(s, i + 1));
}
