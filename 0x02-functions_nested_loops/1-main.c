#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * description: Main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	write(1, "\n", 1);
	write(1, "\n", 1); 
	return (0);
}
