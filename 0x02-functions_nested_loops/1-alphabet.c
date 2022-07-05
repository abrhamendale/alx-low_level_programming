#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 *
 * Description: Prints the alphbet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
	write(1, "\n", 1);
}
