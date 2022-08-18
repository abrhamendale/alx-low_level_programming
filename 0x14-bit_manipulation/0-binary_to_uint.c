#include "main.h"

/**
 * binary_to_uint - Returns unsigned int equivalent of binary
 *
 * @b: Binary input
 *
 * Returns: Unsigned equivalent
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, ie = 0, m = 1;

	for (i = strlen(b) - 1 ; i ; i--)
	{
		if ((unsigned int)b[i] < 48 || (unsigned int)b[i] > 58)
			return (0);
		if (i == strlen(b) - 1)
			ie = ie + (unsigned int)b[strlen(b) - 1] - 48;
		else
		{
			m = m * 2;
			ie = ie + (m * ((unsigned int)b[i] - 48));
		}
	}
	return (ie);
}
