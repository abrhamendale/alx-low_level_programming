#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - Entry point
 *
 * Description: Checks if it is upper case
 * @c: Argument
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
		return (0);
	else
		return (1);
}
