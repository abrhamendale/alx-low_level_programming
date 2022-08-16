#include "lists.h"

/**
 * sum_listint - Prints all elements of a list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Sum of the data of the elements
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum = sum + (tmp->n);
		tmp = tmp->next;
	}
	return (sum);
}
