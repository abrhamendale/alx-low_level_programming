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
	if (argc != 0 && argv[0] != 0)
		printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
