#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * putchr - Entry point
 *
 * Description: Prints _putchar
 *
 * Return: Always 0 (Success)
 **/
int putchr(void)
{
	char st[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
	_putchar(st[i]);
	i++;
	}
	return (0);
}
/**
 * main - Entry point
 *
 * Description: Main function
 *
 * Return: Always 0
 */
int main(void)
{
	putchr();
	write(1, "\n", 1);
	return (0);
}
