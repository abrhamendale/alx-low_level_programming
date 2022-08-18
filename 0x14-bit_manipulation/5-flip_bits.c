#include "main.h"

/**
 * flip_bits - Finds the number of bits to be flipped to change number
 *
 * @n: Input number
 * @m: Input number
 *
 * Returns: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c, b1, b2, z = 0;
	
	for (c = 31 ; c >= 0 ; c--)
	{
		b1 = n >> c;
		b2 = m >> c;

		if ((b1 & 1) != (b2 & 1))
		{
			z++;
		}
	}
	return (z);
}
