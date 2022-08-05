#include "main.h"

/**
 * sum_them_all - Sums arguments
 *
 * @n: Number of variable arguments
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = n ; i > 0; i--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
