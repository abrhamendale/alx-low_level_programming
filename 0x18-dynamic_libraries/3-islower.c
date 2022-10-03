#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: Checks lower case
 * @c: temporary variable
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
