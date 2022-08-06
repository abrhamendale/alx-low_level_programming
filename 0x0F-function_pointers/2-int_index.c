#include "main.h"

/**
 * int_index - Searches for an integer
 *
 * @array: Input array
 * @size: Size of the array
 *
 * Return: The integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, int_index;

	if(size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if(cmp(array[i]))
		{
			int_index = i;
			return (int_index);
		}
	}
	return (-1);
}
