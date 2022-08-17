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
	size_t count = 0;
	listint_t *p1, *p2;

	if (!h)
		return (0);
	p1 = *h;
	*h = NULL;
	while (p1)
	{
		count++;
		p2 = p1;
		free(p2);
		if (p1->next >= p1)
			break;
		p1 = p1->next;
	}
	return (count);
}

