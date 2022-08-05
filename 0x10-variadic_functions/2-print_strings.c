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
		if (va_arg(ap, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char *));
		if (i > 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
