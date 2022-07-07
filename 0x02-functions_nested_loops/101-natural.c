#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * naturaln - Entry point
 *
 * Description: Prints natural numbers
 *
 * Return: Always 0
 */
void naturaln(void)
{
	int i = 0;
	int sum = 0;

	while ((i * 3) < 1024)
	{
		sum = sum + (i * 3);
		i++;
	}
	i = 0;
	while ((i * 5) < 1024)
	{
		sum = sum + (i * 5);
		i++;
	}
	printf("%d \n", sum);
}
/**
 * main - Entry point
 *
 * Description: Main function
 *
 * Return: Always 0
 */
int main(void)
{
	naturaln();
	return (0);
}
