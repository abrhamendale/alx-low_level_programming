#include "main.h"

/**
 * print_strings - Sums arguments
 *
 * @separator: Separator between string arguments
 * @n: Number of variable arguments
 *
 * Return: Sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = n ; i > 0 ; i--)
	{
		printf("%s", va_arg(ap, char *));
		if (i > 1)
			printf("%s", separator);
		if (i == 1)
			printf("\n");
	}
	va_end(ap);
}
