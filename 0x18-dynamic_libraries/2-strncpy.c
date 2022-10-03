#include "main.h"

/**
 * _strncpy - String function
 *
 * Description: Copies strings
 * @dest: Destincation string
 * @src: Source string
 * @n: Number of strings
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
