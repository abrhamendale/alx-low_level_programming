#include "main.h"

/**
 * _putchar - Entry point
 *
 * Description: Prints a charcter
 * @c: Input charcter
 * Return: The charcter
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
