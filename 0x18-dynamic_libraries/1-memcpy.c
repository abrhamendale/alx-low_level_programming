#include "main.h"

/**
 * _memcpy - Entry point
 *
 * Description: Sets buffer values
 * @dest: Input array
 * @src: Value to be set
 * @n: The number of array elements
 *
 * Return: Charcter pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		memcpy(dest, src, n);
	}
		return (dest);
}
