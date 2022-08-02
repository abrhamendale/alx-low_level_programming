#include "main.h"

/**
 * _calloc - Allocates memory using malloc
 *
 * @nmemb: Number of elements
 * @size: Size of the members
 *
 * Return: Created string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if ((unsigned int *)calloc(nmemb, size) == NULL)
		return (NULL);
	return ((unsigned int *)calloc(nmemb, size));
}
