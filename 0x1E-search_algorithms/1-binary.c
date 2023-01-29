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
	int ret = 0;

	ret = bin(array, -1, size, value);
	if (ret > 0)
		return (ret);
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
	size_t i = 0, m = (r + l) / 2;
	int ret = 0;

	if (l + 1 == r)
		return (-1);
	printf("Searching in array: ");
	for (i = l + 1 ; i < r ; i++)
	{
		printf("%d", array[i]);
		if (i + 1 < r)
			printf(", ");
	}
	printf("\n");
	if (array[m] == value)
		return (m);
	if (value > array[m])
	{
		ret = bin(array, m, r, value);
	}
	else
	{
		ret = bin(array, l, m, value);
	}
	return (ret);
}
