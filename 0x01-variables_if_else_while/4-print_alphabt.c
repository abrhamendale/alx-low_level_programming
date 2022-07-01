#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints the alphabets except e and q
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	char Ll = 'a';

	while (Ll <= 'z')
	{
	if ((Ll > 'q') || (Ll < 'q'))
	if ((Ll > 'e') || (Ll < 'e'))
	{
		putchar(Ll);
	}
		Ll++;
	}
	putchar('\n');
	return (0);
}

