#include <stdio.h>

/**
 * main - Entry point
 *
 * description: Print the base 16 digits
 *
 * Return: 0 (Success)
 **/
int main(void)
{
	char H;

	for (H = 0 ; H <= 9 ; H++)
	putchar(H + '0');
	for (H = 'a' ; H <= 'f' ; H++)
	putchar(H);
	putchar('\n');
	return (0);
}
