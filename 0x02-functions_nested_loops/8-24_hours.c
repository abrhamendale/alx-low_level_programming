#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - Entry point
 *
 * Description: Prints every minute
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (i < 3)
	{
		while (j < 10)
		{
			while (k < 6)
			{
				while (l < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					write(1, ":", 1);
					_putchar(k + '0');
					_putchar(l + '0');
					write(1, "\n", 1);
					l++;
				}
			l = 0;
			k++;
			}
		l = 0;
		k = 0;
		j++;
		}
	j = 0;
	l = 0;
	k = 0;
	i++;
	}
}
