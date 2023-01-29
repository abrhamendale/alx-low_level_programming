#include "search_algos.h"

/**
 * jump_search - Calculates the minimum value
 *
 * @array: Input array
 * @size: Input b
 * @value: The value to search
 *
 * Return: The smallest one
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
	}

	jump = i - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", jump, i);
	if (i >= size)
		i = size - 1;
	while (jump <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		if (array[j] == value)
			return (jump);
		jump++;
	}
	return (-1);
}
