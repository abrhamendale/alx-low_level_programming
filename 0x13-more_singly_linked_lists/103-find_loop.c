#include "main.h"

/**
 * find_listint_loop - Prints all elements of a list
 *
 * @head: Pointer to the list head
 *
 * Return: PThe address of the node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1, *p2;

	if (!head)
		return (NULL);
	p1 = p2 = head;
	while (p2->next && p2->next->next)
	{
		p2 = p2->next->next;
		p1 = p1->next;
		if (p1 == p2)
		{
			p1 = head;
			while (p1 != p2)
			{
				p1 = p1->next;
				p2 = p2->next;
			}
			return (p2);
		}
	}
	return (NULL);
}

