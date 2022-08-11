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
	list_t * tmp;
	if(head->next != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
