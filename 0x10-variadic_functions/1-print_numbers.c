#include "main.h"

/**
 * print_numbers - Sums arguments
 *
 * @separator: Separating character between numbers
 * @n: Number of variable arguments
 *
 * Return: Sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = n ; i > 0; i--)
	{
		printf("%d", va_arg(ap, int));
		if (i > 1)
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
