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
	if (*head == NULL)
	{
		return;
	}
	free_listint((*head)->next);
	(*head)->n = 0;
	*head = NULL;
	head = NULL;
}
