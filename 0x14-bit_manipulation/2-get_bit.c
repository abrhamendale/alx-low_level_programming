#include "main.h"

/**
 * get_bit - Returns unsigned int equivalent of binary
 *
 * @n: Binary input
 * @index: Index of the input number
 *
 * Returns: Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	long int r, q = n;
	int i;

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
