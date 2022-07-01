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
	char S;

	for (S = '0' ; S <= '9' ; S++)
	{
		putchar(S);
		if (S < '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
