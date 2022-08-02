#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Size of allocated memory
 *
 * Return: Created string
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	return (malloc(b));
}
