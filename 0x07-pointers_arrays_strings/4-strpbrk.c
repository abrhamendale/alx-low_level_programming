#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * Description: Locates a charcter in a string
 * @s: The string input
 * @accept:Given characters
 *
 * Return: Charcter pointer
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
