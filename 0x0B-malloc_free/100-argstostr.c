#include "main.h"

/**
 * argstostr - Function to concatenate arguments
 *
 * Description: Concatenates aruments of a function call
 * @ac: Number of arguments
 * @av: Arguments vector
 *
 * Return: Character string
 */
char *argstostr(int ac, char **av)
{
	char *g;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		g = strcat(g, av[i]);
		printf("%s\n", av[i]);
		if(i != ac - 1)
			g = strcat(g, "\n");
	}
	return (g);
}
