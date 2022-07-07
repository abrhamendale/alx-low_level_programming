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
	int f1 = 0;
	int f2 = 1;
	int f3 = 0;

	printf("1, ");
	while (i < 50)
	{
		f3 = f1 + f2;
		printf("%d, ", f3);
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
