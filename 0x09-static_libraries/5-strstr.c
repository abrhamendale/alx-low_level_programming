#include "main.h"

/**
 * _strstr - Entry point
 *
 * Description: Locates a charcter in a string
 * @haystack: The string input
 * @needle: The string to be located
 *
 * Return: Charcter pointer
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
