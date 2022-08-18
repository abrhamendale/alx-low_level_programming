#include "main.h"

/**
 * clear_bit - Sets a bit in the input number to 0
 *
 * @n: Integer input
 * @index: Index of the input number
 *
 * Return: 1 if SUCCESS
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, r, q = *n, m = 1;
	int k = 1, count = 0;

	for (i = 0 ; q > 0 ; i++)
	{
		q = q / 2;
		count++;
	}
	q = *n;
	for (i = 0 ; i < index ; i++)
	{
		k = k * 2;
		if (i == index)
			break;
	}
	for (i = 0 ; i <= index ; i++)
	{
		if (i == 0)
			m = 1;
		else
			m = m * 2;
		r = q % 2;
		q = q / 2;
		if (q == 1 && i == index)
			return (1);
		if (i == index)
		{
			if (r == 1)
				(*n) = (*n) - k;
			return (1);
		}
	}
	return (-1);
}
