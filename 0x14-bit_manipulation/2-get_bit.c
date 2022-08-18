#include "main.h"

/**
 * get_bit - Returns unsigned int equivalent of binary
 *
 * @n: Binary input
 * @index: Index of the input number
 *
 * Return: Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, r, q = n;

	for (i = 0 ; q > 0 ; i++)
	{
		r = q % 2;
		q = q / 2;
		if (q == 1 && i == index)
			return (q);
		if (i == index)
		{
			return (r);
		}
	}
	return (-1);
}
