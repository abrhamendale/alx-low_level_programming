#include <stdio.h>
#include <stdlib.h>

/**
 * fibonacci - Entry point
 *
 * Description: Prints the fibonacci numbers
 *
 * Return: void
 */
void fibonacci(void)
{
	int i = 1;
	unsigned long int f1 = 0;
	unsigned long int f2 = 1;
	unsigned long int f3 = 0;

	while (i < 51)
	{
		f3 = f1 + f2;
		printf("%lu, ", f3);
		f1 = f2;
		f2 = f3;
		i++;
	}
}
/**
 * main - Entry point
 *
 * Description: Main function
 *
 * Return: 0
 */
int main(void)
{
	fibonacci();
	return (0);
}
