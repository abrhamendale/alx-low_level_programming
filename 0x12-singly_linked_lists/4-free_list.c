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
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
