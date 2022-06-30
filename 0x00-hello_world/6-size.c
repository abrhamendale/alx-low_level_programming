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

	printf("Size of a char: %s bytes(s)", sizeof(c));
	printf("Size of an int: %d bytes(s)", sizeof(i));
	printf("Size of a long int: %li bytes(s)", sizeof(Li));
	printf("Size of a long long int: %lli bytes(s)", sizeof(LLi));
	printf("Size of a float: %f bytes(s)", sizeof(F));
	return (0);
}
