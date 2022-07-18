#include "main.h"

/**
 * _strspn - Entry point
 *
 * Description: Locates a charcter in a string
 * @s: The string input
 * @accept:Given characters
 *
 * Return: Charcter pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
