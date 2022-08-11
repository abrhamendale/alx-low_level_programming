#include "main.h"

/**
 * free_list - Frees a signly linked list
 *
 * @head: Head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	struct list_s *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
