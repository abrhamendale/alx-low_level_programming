#include "main.h"
#include <unistd.h>
#include <ctype.h>
/**
 * _isalpha - Entry point
 *
 * Description: Checks if alphanumeric
 * @c: argument
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
