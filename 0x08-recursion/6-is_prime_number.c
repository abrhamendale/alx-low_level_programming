#include "main.h"

/**
 * is_prime_number - Entry point
 *
 * Description: Prints a string
 * @n: Input number
 *
 * Return: Nothing
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - Function
 *
 * Description: Calculates the square of a number
 * @n: The number to be checked
 * @i: Count
 *
 * Return: The square root
 *
 */
int prime(int n, int i)
{
	if (n == 1 || (-1 * n) == 1)
		return (0);
	if (n < 0 && (-1 * n) % i == 0 && (n != i))
		return (0);
	if ((n % i) == 0 && (n != i))
		return (0);
	if (i == n)
		return (1);
	return (prime(n, i + 1));
}
