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
	int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit (98);
		}
		head = head->next;
		count++;
	}
	return (count);
}

