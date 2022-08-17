#include "main.h"

/**
 * print_listint_safe - Prints all elements of a list
 *
 * @head: Pointer to the list head
 *
 * Return: The number of the nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}
	}
	return (0);
}

