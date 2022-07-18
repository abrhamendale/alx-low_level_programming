#include "main.h"

/**
 * _memset - Entry point
 *
 * Description: Sets buffer values
 * @s: Input array
 * @b: Value to be set
 * @n: The number of array elements
 *
 * Return: Charcter pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		memset(s, b, n);
	}
		return (s);
}
