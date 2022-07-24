#include "main.h"

/**
 * main - main function
 *
 * Description: Generates password
 *
 * Return: Nothing
 */
int main(void)
{
	int i, j;
	char rn[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char pwd[15];

	srand(time(NULL));
	for (i = 0 ; i < 15 ; i++)
	{
		j = rand() % 62;
		pwd[i] = rn[j];
		printf("%c", pwd[i]);
	}
	return (0);
}
