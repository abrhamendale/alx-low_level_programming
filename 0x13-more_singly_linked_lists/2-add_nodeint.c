#include "Lists.h"

/**
 * add_nodeint - Prints all elements of a list
 *
 * @n: Number
 * @head: Points to the head of the list
 *
 * Return: Size of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = (struct listint_s *)malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	tmp->n = n;
	tmp->next = (*head);
	(*head) = tmp;
	return (tmp);
}
