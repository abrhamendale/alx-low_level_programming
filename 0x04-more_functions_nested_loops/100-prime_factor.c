#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: main
 *
 * Return: 0
 */
int main(void)
{
	long i;
	long f;
	long n = 612852475143;
	double sn = sqrt(n);

	for (i = 1; i <= sn; i++)
	{
		if (n % i == 0)
		{
			f = n / i;
		}
	}
	printf("%ld\n", f);
	return (0);
}
