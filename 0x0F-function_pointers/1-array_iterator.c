#include "main.h"

/**
 * array_iterator - check if a number is equal to 98
 *
 * @array: Input array
 * @size: Array size
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	
	for (i = 0 ; i < (int)size ; i++)
	{
		action(array[i]);
	}
}
