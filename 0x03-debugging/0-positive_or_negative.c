#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * positive_or_negative - Entry point
 *
 * desription: Random number generator
 * @i: Argument
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	int n = i;

	/*
	 * srand(time(0));
	n = rand() - RAND_MAX / 2;
	*/
	if (n == 0)
	printf("%d is zero\n", n);
	if (n > 0)
	printf("%d is positive\n", n);
	if (n < 0)
	printf("%d is negative\n", n);
}


