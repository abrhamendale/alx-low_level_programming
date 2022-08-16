#include "Lists.h"

/**
 * free_listint - Prints all elements of a list
 *
 * @head: The head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	head->n = 0;
	free(head);
}
