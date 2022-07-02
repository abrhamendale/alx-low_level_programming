#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints a pair of possible combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			for  (k = 0 ; k <= 9 ; k++)
			{
				for (l = 0 ; l <= 9 ; l++)
				{
				if (i < k || (i == k && j < l))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


