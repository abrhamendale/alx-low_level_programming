#include "main.h"

/**
 * array_range - Creates array using calloc
 *
 * @min: Minimum member
 * @max: Maximum member
 *
 * Return: Created string
 */
int *array_range(int min, int max)
{
	int i;
	int *n;

	n = malloc(sizeof(int) * (max - min + 2));
	if (n == NULL || min > max)
	{
		return (NULL);
	}
	for (i = 0 ; i < max - min + 1 ; i++)
	{
		if (i == 0)
			n[i] = min;
		else
			++(*n + i);
	}
	n[i] = '\0';
	return (n);
}
