#include <stdio.h>

/**
 * main - Entry point
 *
 * description: Print the alphabet in reverse
 *
 * Return: 0 (Success)
 **/
int main(void)
{
	char Ll;

	for (Ll = 'z' ; Ll >= 'a' ; Ll--)
	{
	putchar(Ll);
	}
	putchar('\n');
	return (0);
}
