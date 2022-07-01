#include <stdio.h>

/**
 * main - Entry point
 *
 * description: Print combination of single digits
 *
 * Return: 0 (Success)
 **/
int main(void)
{
	int S;

	for (S = 0 ; S <= 9 ; S++)
	{
		putchar(S + '0');
		if (S < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
