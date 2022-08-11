#include <stdio.h>
#include "function_pointers.h"

/**
 * main - check the code
 *
 *
 * Return: Always 0.
 */
void main(int argc, char * argv[])
{
	int i;
	char *a;

	a = (char *)&main;
	i = 0;
	while(i < atoi(argv[1]))
	{
		printf("%x ", *(a + i));
		i++;
	}
}
