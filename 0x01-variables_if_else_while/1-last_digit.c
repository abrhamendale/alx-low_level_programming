#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * description: program
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	if (n < 0)
	{
	n = -1 * n;
	printf(" -%d and is less than 6 and not 0\n", (n % 10));
	}
	else
	{
	if ((n % 10) > 5)
	printf(" %d and is greater than 5\n", (n % 10));
	if ((n % 10) == 0)
	printf(" %d and is 0\n", (n % 10));
	if ((n % 10) < 6 && ((n % 10) > 0))
	printf(" %d and is less than 6 and not 0\n", (n % 10));
	}
	return (0);
}
