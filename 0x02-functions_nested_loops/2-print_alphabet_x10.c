#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prits the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		while (j < 'z')
		{
			_putchar(j);
			j++;
		}
	write(1, "\n", 1);
	i++;
	j = 'a';
	}
	write(1, "\n", 1);
}
