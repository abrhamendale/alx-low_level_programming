#include "main.h"

/**
 * print_numbers - Sums arguments
 *
 *
 *
 * Return: Sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = n ; i > 0; i--)
		{
			printf("%d", va_arg(ap, int));
			if (i > 1)
				printf("%s", separator);
			if (i == 1)
				printf("\n");
		}
		va_end(ap);
	}
}
