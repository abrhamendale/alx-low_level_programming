#include "main.h"

/**
 * binary_to_uint - Returns unsigned int equivalent of binary
 *
 * @b: Binary input
 *
 * Return: Unsigned equivalent
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ie = 0, m = 1;
	int k = (int)strlen(b), i;
	
	for (i = k - 1 ; i >= 0 ; i--)
	{
		if ((unsigned int)b[i] < 48 || (unsigned int)b[i] > 58)
			return (0);
		if (i == k - 1)
			ie = ie + (unsigned int)b[k - 1] - 48;
		else
		{
			m = m * 2;
			ie = ie + (m * ((unsigned int)b[i] - 48));
		}
	}
	return (ie);
}
