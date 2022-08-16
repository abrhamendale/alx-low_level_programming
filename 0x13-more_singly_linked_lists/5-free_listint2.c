#include "lists.h"

/**
 * free_listint2 - Prints all elements of a list
 *
 * @head: The head of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p1, *p2;

	if (head == NULL)
	{
		return;
	}
	p1 = *head;
	while (p1 != NULL)
	{
		p2 = p1;
		p1 = p1->next;
		free(p2);
	}
	*head = NULL;
}
