#include "main.h"

/**
 * print_list - Finds the number of elements of a signly linked list
 *
 * @h: Input list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	struct list_t *tmp;
	size_t count;

	tmp = h;
	if(tmp->next == NULL)
	{
		return (0);
	}
	else
	{
		while(tmp != NULL)
		{
			tmp = tmp->next;
			count++;
		}
		return (count);
	}
}
