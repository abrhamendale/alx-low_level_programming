#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Number of arguments passed to function
 * @argv: Array of arguments passed to the function
 *
 * Return: Exit status
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (atoi(argv[i]) == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	exit(EXIT_SUCCESS);
}
