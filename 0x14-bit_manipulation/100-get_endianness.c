#include "main.h"

/**
 * get_endianness - Checkes endianness
 *
 *
 *
 * Returns: 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *c;
	i = 1;
	c = (char *)&i;
	return ((int)c[0]);
}
