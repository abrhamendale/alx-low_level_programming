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
	int ret = 0;

	if (array == NULL || size == 0)
		return (-1);
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
		printf("right\n");
		l = m + 1;
		ret = bin(array, l, r, value);
		return (ret);
	}
	else if (value < array[m])
	{
		printf("left\n");
		r = m - 1;
		ret = bin(array, l, r, value);
		return (ret);
	}
	else
		return (-1);
}
/**
 * bin - Helper function for binary search
 *
 * @array: The input array
 * @l: Start of the array
 * @r: End of the list
 * @value: Value to be searched
 *
 * Return: The index
 */
int bin(int *array, size_t l, size_t r, int value)
{
	size_t i = 0, m = ((r - l + 1) / 2) + l;
	int ret = 0;
	
	if (array == NULL || r == 0)
		return (-1);
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
		printf("right\n");
		l = m + 1;
		ret = bin(array, l, r, value);
	}
	else if (value < array[m])
	{
		printf("left\n");
		r = m - 1;
		ret = bin(array, l, r, value);
	}
	return (ret);
}
