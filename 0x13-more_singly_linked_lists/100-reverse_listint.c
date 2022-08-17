#include "main.h"

/**
 * reverse_listint - Prints all elements of a list
 *
 * @head: Head of the list
 *
 * Return: Head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1, *p2;

	p1 = p2 = NULL;
	if (head != NULL)
	{
		while (*head != NULL)
		{
			p2 = *head;
			*head = (*head)->next;
			p2->next = p1;
			p1 = p2;
		}
		*head = p1;
		return (*head);
	}
	return (NULL);
}
