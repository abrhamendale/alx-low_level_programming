#include "main.h"

/** 
 * _memset - Function
 *
 * Description: Fills memory with constant byte
 *
 * Return: Character set
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		*s[i] = b;
	return (s);
}
