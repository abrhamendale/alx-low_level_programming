#include "main.h"

/**
 * add_node_end - Adds an element at the end of a signly linked list
 *
 * @head: Head of the list
 * @str: Element to be added
 *
 * Return: Number of nodes
 */
list_t *add_node_end(list_t **head, const char *str);
{
	struct list_t* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct list_t *last = *head;
	
	new_node->str  = str;
	new_node->next = NULL;
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	} 
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (&last); 
}
