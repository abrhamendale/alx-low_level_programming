#include "main.h"

/**
 * set_bit - Sets a bit in a number
 *
 * @n: Binary input
 * @index: Index of the input number
 *
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	return (!!(*n |= 1L << index));
}
