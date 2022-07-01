#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print numbers using putchar
 *
 * Return: 0 (Success)
 *
 **/
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
