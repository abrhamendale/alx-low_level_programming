#include "3-calc.h"

/**
 * op_add - the integer to check
 *
 * @a: First input number
 * @b: Second input number
 *
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - the integer to check
 *
 * @a: First input number
 * @b: Second input number
 *
 * Return: Difference
 */ 
int op_sub(int a, int b)                                                        {
	return (a - b);
}
/**                                                                             
 * op_mul - the integer to check
 *
 * @a: First input number
 * @b: Second input number                                               
 *
 * Return: Difference
 */    
int op_mul(int a, int b)                                                        {
	return (a * b);
}
/**
 * op_div - the integer to check
 *
 * @a: First input number
 * @b: Second input number
 *
 * Return: Quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the modulus of a number
 *
 * @a: First input number
 * @b: Second input number
 *
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
