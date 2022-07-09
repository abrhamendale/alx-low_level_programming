#include "main.h"
#include <unistd.h>

/**
 * times_table - Entry point
 *
 * Description: Prints the time table
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int p = 0;

	if (n >= 0 && n <= 15)
	while (i <= n)
	{
		while (j <= n)
		{
			p = i * j;
			if ((p / 100) != 0)
			{
				_putchar(p / 100 + '0');
				_putchar((p / 10) % 10 + '0');
			}
				else
			{
				if (j != 0)
				write(1, " ", 1);
				if ((p / 10) != 0)
					_putchar((p / 10) + '0');
				else
				{
					if (j != 0)
						write(1, " ", 1);
				}
			}
				_putchar((p % 10) + '0');
			if (j < n)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			j++;
		}
	write(1, "\n", 1);
	j = 0;
	i++;
	}
}

