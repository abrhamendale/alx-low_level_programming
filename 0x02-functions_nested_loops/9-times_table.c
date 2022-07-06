#include "main.h"
#include <unistd.h>

/**
 * times_table - Entry point
 *
 * Description: Prints the time table
 *
 * Return: 0
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int p = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			p = i * j;
			if ((p / 10) != 0)
			_putchar(p / 10 + '0');
			else
				if (j != 0)
				write(1, " ", 1);
			_putchar((p % 10) + '0');
			if (j < 9)
			{
			write(1, ", ", 1);
			write(1, " ", 1);
			}
			j++;
		}
	write(1, "\n", 1);
	j = 0;
	i++;
	}
}

