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
	int count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
