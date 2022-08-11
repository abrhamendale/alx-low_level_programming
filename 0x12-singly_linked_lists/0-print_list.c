#include "main.h"

/**
 * print_list - Prints all the elements of a signly linked list
 *
 * @h: Input list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t count = 0;

	tmp = h;
	if (tmp->next == NULL)
	{
		printf(" Empty.");
		return (0);
	}
	else
	{
		while (tmp != NULL)
		{
			if (tmp->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%i] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			count++;
		}
	}
	return (count);
}
