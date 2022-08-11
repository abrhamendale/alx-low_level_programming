#include "main.h"

/**
 * add_node - Adds an element at the beggining of a signly linked list
 *
 * @head: Head of the list
 * @str: Element to be added
 *
 * Return: Number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_t* new_node =
           (struct list_t*) malloc(sizeof(struct list_t)); 
	new_node->str  = str;
	new_node->next = (head);
	head = new_node;
}
