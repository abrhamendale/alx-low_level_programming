#include <stdio.h>
#include <stdlib.h>

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

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	exit(EXIT_SUCCESS);
}
