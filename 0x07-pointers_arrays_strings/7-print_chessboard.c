#include "main.h"

/**
 * print_chessboard - Entry point
 *
 * Description: Locates a charcter in a string
 * @a: Character array
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i;
	int j;

	for (i = 0 ; i < sizeof(a) ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			if (isalpha(a[i][j]))
				_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
