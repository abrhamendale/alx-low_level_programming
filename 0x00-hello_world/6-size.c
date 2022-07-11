#include<stdio.h>

/**
 * main - Entry point
 *
 * description: size
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int Li;
	long long int LLi;
	float F;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(Li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(LLi));
	printf("Size of a float: %lu byte(s)\n", sizeof(F));
	return (0);
}
