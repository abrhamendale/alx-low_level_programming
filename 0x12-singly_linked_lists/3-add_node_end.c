#include "main.h"

/**
 * add_node_end - Adds an element at the end of a signly linked list
 *
 * @head: Head of the list
 * @str: Element to be added
 *
 * Return: Number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *new_node = (struct list_s *) malloc(sizeof(struct list_s));
	struct list_s *last = *head;

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (last);
}
