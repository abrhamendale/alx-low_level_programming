#include "main.h"

/**
 * infinite_add - Summing function
 *
 * Description: Adds to numbers
 * @n1: Number 1
 * @n2: Number 2
 * @r: Number 3
 * @size_r: Size of number 3
 *
 * Return: Result of the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ldiff = 0;
	int rem = 0;
	int i;

	printf("%lu\n", strlen(n1));
	for (i = strlen(n1) ; i >= 0 ; i--)
	{
		ldiff = strlen(n1) - strlen(n2);
		if (strlen(n1) > strlen(n2))
			r[i] = (int)(n1[i] - '0') + (int)(n2[i - ldiff] - '0') + rem + '0';
		else
			r[i] = (int)(n1[i - ldiff] - '0') + (int)(n2[i] - '0') + rem + '0';
		if (r[i] > 9)
		{
			r[i] = r[i] % 10 + '0';
			rem = r[i] / 10 + '0';
			printf("%d\n", rem);
		}
	}
	if (size_r < (int) strlen(n1) + rem && ldiff > 0)
		return (0);
	if (size_r < (int) strlen(n2) + rem && ldiff < 0)
		return (0);
	return (r);
}
