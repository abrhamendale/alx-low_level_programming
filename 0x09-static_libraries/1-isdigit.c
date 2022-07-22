#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry point
 *
 * Description: Checks if it is a digit
 * @c: Argument
 *
 * Return: 0.
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
		return (0);
	else
		return (1);
}
