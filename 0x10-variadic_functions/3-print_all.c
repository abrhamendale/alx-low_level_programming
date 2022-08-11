#include "main.h"

/**
 * print_all - Sums arguments
 *
 * @format: Format allowed in the function
 *
 * Return: Sum
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;

	va_start(ap, strlen(format));
	while(i < strlen(format))
	{
		switch (format[i])
		{
			case c:
				printf("%c", va_arg(ap, char));
			case i:
				printf("%i", va_arg(ap, integer));
			case f:
				printf("%f", va_arg(ap, float));
			case s:
				printf("%s", va_arg(ap, char *));
			default:
				printf("");
		}
	}
	va_end(ap);
}
