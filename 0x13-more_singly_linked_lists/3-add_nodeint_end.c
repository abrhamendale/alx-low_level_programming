#include "Lists.h"

/**
 * add_nodeint_end - Prints all elements of a list
 *
 * @head: Points to the head of the list
 * @n: Number
 *
 * Return: Pointer to the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *p;

	tmp = (struct listint_s *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
	return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
	*head = tmp;
	return (tmp);
	}
	p = *head;
	while(p->next != NULL)
	p = p->next;
	p->next = tmp;
	return (p);
}
