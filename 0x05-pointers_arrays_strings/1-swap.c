#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: swaps the values of two variables
 * @a: Pointer argument
 * @b: Pointer argument
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

