#include "search_algos.h"

/**
 * linear_search - Searches for a value using linear search algorithm
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to look for
 *
 * Return: The first index where value is stored
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
