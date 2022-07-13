#include "main.h"

/**
 * reverse_array - String function
 *
 * Description: Compares two strings
 * @a: Array
 * @n: Size of the array
 *
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	char temp;

	for (i = 0 ; i < (n / 2) ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}

}
