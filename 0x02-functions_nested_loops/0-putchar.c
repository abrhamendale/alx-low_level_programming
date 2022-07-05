#include <stdio.h>
#include "main.h"

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
int main(void)
{
	putchr();
	return (0);
}
