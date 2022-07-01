#include <stdio.h>

/**
 * main - Entry point
 *
 * description: Print the base 16 digits
 *
 * Return: 0 (Success)
 **/
int main(void)
{
	char H;

	for (H = 0 ; H <= 16 ; H++)
	{
	switch (H)
	{
	case 10:
	putchar('a');
	break;
	case 11:
	putchar('b');
	break;
	case 12:
	putchar('c');
	break;
	case 13:
	putchar('d');
	break;
	case 14:
	putchar('e');
	break;
	case 15:
	putchar('f');
	break;
	default:
	putchar(H + '0');
	break;
	}
	}
putchar('\n');
return (0);
}
