#include "main.h"

/**
 * add_node - Adds an element at the beggining of a singly linked list
 *
 * @head: Head of the list
 * @str: Element to be added
 *
 * Return: Number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new_node;
	char *tmp;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}
	tmp = strdup(str);
	new_node = (struct list_s *) malloc(sizeof(struct list_s));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = tmp;
	new_node->len = strlen(tmp);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
