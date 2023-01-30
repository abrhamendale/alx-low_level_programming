#include "search_algos.h"

/**
 * interpolation_search - Implements an interpolation search algorithm
 *
 * @array: Input array
 * @size: The size of the array
 * @value: value to match element
 *
 * Return: -The index of the element
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int l = 0, r = size - 1, parser;

	if (array == NULL || size == 0)
		return (-1);
	while (array[r] != array[l])
	{
		parser = l + (((double)(r - l) / (array[r] - array[l]))
			       * (value - array[l]));

		if (parser > size)
		{
			printf("Value checked array[%d] is out of range\n"
					, parser);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", parser, array[parser]);
		if (value > array[parser])
			l = parser + 1;
		else if (value < array[parser])
			r = parser - 1;
		else
			return (parser);
	}
	if (value == array[l])
		return (l);
	else
		return (-1);
}
