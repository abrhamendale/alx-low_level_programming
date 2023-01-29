#include "search_algos.h"

/**
 * min - Calculates the minimum value
 *
 * @a: Input a
 * @b: Input b
 *
 * Return: The smallest one
 */
int min(int a, int b)
{
	if(b>a)
		return a;
	else
		return b;
}
/**
 * jumpsearch - Calculates the minimum value
 *
 * @arr: Input array
 * @x: Input b
 *
 * Return: The smallest one
 */
int jump_search(int *array, size_t size, int value);
int jumpsearch(int arr[], int x, int n)
{
	// Finding block size to be jumped
size_t
	int n = value, step = sqrt(n);

	// Finding the block where element is
	// present (if it is present)
	int prev = 0;
	while (arr[min(step, n)-1] < x)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}
	// Doing a linear search for x in block
	// beginning with prev.
	while (arr[prev] < x)
	{
		prev++;
	// If we reached next block or end of
	// array, element is not present.
		if (prev == min(step, n))
			return -1;
	}
	// If element is found
	if (arr[prev] == x)
		return prev;
	return -1;
}
