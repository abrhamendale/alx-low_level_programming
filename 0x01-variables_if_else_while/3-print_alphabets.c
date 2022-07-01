#include <stdio.h>

/**
 * main - Entry point
 *
 * description: Alphabets in upper and lower case
 *
 * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	char Ul = 'A';
	char Ll = 'a';

	while (Ll <= 'z')
	{
		putchar(Ll);
		Ll++;
	}
	while (Ul <= 'Z')
	{
		putchar(Ul);
		Ul++;
	}
	putchar('\n');
	return (0);
}
