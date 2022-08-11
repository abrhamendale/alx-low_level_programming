#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - Calculator
 *
 *
 * Return: 0 if false, something else otherwise.
 */
int main( int argc, char *argv[] )
{
	int (*p)(int, int);
	int cal;

	if (argc != 0)
	{
		p = get_op_func(argv[2]);
		cal = p(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", cal);
	}
	return (0);
}
