#include "op_h.h"

/**
 * add - adds two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: Result of the operation
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: Result of the operation
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: Result of the operation
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divide two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: Result of the operation
 */
int div(int a, int b)
{
	int c = 0;

	c = a / b;
	return (c);
}
/**
 * mod - calculates the modulus of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: Result of the operation
 */
int mod(int a, int b)
{
        return (a % b);
}

