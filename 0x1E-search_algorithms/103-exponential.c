#include "search_algos.h"

/**
 * exponential_search - Implements the exponential search
 *
 * @array: Input array
 * @size: Size of the array
 * @value: The value to be searched
 *
 * Return: The index of the number to be searched
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound - 1);

	if (bound + 1 < size)
		return (bin(array, (bound / 2) - 1, bound + 1, value));
	else
		return (bin(array, (bound / 2) - 1, size, value));
}
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
