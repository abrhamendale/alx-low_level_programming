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

	if (*head == NULL)
	{
		printf("1");
		return (0);
	}
	i = (*head)->n;
	*head = (*head)->next;
	(*head)->n = 0;
	free(*head);
	return (i);
}
