#include "lists.h"

/**
 * listint_len - Prints all elements of a list
 *
 * @h: Pointer to the head of the list
 *
 * Return: Size of the list
 */
size_t listint_len(const listint_t *h)
{
	const struct listint_s *tmp;
	int count = 0;

	tmp = h;
	if (tmp == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
