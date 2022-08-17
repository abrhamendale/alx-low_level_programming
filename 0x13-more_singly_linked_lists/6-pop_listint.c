#include "lists.h"

/**
 * pop_listint - Prints all elements of a list
 *
 * @head: Pointer to the head
 *
 * Return: Data of the head
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *p1;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	p1 = *head;
	*head = (*head)->next;
	free(p1);
	return (i);
}
