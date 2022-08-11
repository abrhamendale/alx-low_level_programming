#include "main.h"

/**
 * list_len - Finds the number of elements of a signly linked list
 *
 * @h: Input list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t count = 0;

	tmp = h;
	if (tmp->next == NULL)
	{
		return (0);
	}
	else
	{
		while (tmp != NULL)
		{
			tmp = tmp->next;
			count++;
		}
	}
	return (count);
}
