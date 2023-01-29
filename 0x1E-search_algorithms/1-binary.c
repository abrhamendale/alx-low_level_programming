#include "search_algos.h"

/**
 * binary_search - Searches for a value using binary search algorithm
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to look for
 *
 * Return: The first index where value is stored
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, r = size - 1, l = 0, m = r / 2;

	if (array == NULL || size == 0)
		return (-1);
	while (m != 0)
	{
		printf("Searching in array: -%lu %lu %lu-\n", l, m, r);
		for (i = l ; i <= r ; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
		}
		printf("\n");
		if (array[m] == value)
			return (m);
		else if (value > array[m])
		{
			l = m + 1;
			m = ((r - l + 1) / 2) + l;
		}
		else if (value < array[m])
		{
			r = m - 1;
			m = ((r - l) / 2) + l;
			printf("left %lu %lu %lu\n", l, m, r);
		}
		else if (l == m)
			return (-1);
	}
	return (-1);
}
