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
	int i, c;

	if (argc < 2)
	{
		printf("error\n");
		return (1);
	}
	c = atoi(argv[1]);
	for (i = 0 ; c > 0 ; i++)
	{
		if (c - 25 >= 0)
			c = c - 25;
		else if (c - 10 >= 0)
			c = c - 10;
		else if (c - 5 >= 0)
			c = c - 5;
		else if (c - 2 >= 0)
			c = c - 2;
		else if (c - 1 >= 0)
			c = c - 1;
	}
	printf("%d\n", i);
	return (0);
}
