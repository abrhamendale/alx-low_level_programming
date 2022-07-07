#include <stdio.h>
#include <stdlib.h>

/**
 * fibonaccieven - Entry point
 *
 * Description: Prints the fibonacci numbers
 *
 * Return: void
 */
void fibonaccieven(void)
{
	int i = 1;
	int f1 = 0;
	int f2 = 1;
	int f3 = 0;
	int sum = 0;

	while (f3 < 4000000)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		if ((f3 % 2) == 0)
			sum = sum + f3;
		i++;
	}
	printf("%d\n", sum);
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
	fibonaccieven();
	return (0);
}
