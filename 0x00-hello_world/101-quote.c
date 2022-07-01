#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str1, sizeof(char), 1, stderr);
	return (1);
}
