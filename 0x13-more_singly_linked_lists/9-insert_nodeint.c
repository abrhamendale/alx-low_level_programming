#include "Lists.h"

/**
 * insert_nodeint_at_index - Prints all elements of a list
 *
 * @head: Pointers to the head of the list
 * @idx: Index of node to be printed
 * @n: Number of
 *
 *
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = 0;
	listint_t *tmp, *p;

	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	p = *head;
	while (p->next != NULL)
	{
		if (i == idx - 1)
			break;
		i++;
		p = p->next;
	}
	if (i == idx - 1)
	{
		tmp->next = p->next;
		p->next = tmp;
	}
}
