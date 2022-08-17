#include "main.h"

/**
 * listint_safe - Prints all elements of a list
 *
 * @h: The head of the list
 *
 * Return: Size of the list of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *p1 = NULL;
	int count = 0;

	if (h == NULL)
		return (0);
	while (*h != NULL)
	{
		if ((*h)->next > *h)
			return (0);
		p1 = *h;
		*h = (*h)->next;
		free(p1);
		count++;
	}
	return (count);
}

