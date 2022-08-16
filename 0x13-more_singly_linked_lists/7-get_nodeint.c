#include "Lists.h"

/**
 * get_nodeint_at_index - Prints all elements of a list
 *
 * @head: Pointer to the head of the list
 * @index:
 *
 * Return: Pointer to the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
		if (i == index)
			return (tmp);
	}
	return (NULL);
}
