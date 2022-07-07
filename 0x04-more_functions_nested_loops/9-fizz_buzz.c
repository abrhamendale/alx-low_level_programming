#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints numbers 1 upto 100 and fizz buzz
 *
 * Return: 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - Entry point
 *
 * Description: Print 1 upto 100
 *
 * Return: 0
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if (((i % 3) == 0) && ((i % 5) != 0))
			printf("Fizz");
		else if (((i % 5) == 0) && ((i % 3) != 0))
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
}
