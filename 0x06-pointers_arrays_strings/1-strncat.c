#include "main.h"

/**
 * _strncat - function
 *
 * Description: Concatenates strings
 * @dest: destination string
 * @src: source string
 * @n: number of strings
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
