#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: Prints numbers 0 upto 9
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;

for (j = 0; j < 10 ; j++)
{
	for (i = 0; i < 15 ; i++)
	{
		if (i > 9)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
		_putchar('\n');
}
}
