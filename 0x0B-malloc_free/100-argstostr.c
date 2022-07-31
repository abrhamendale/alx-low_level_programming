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
	int i, j, l;

	l = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		j = 0;
		while (*(av[i] + j))
		{
			l++;
			j++;
		}
	}
	g = malloc(sizeof(char) * (l + ac + 1));
	l = 0;
	for (i = 0; i < ac ; i++)
	{
		j = 0;
		while (*(av[i] + j))
		{
			g[l] = *(av[i] + j);
			j++;
			l++;
		}
			g[l] = '\n';
			l++;
	}
	g[l] = '\0';
	return (g);
}
