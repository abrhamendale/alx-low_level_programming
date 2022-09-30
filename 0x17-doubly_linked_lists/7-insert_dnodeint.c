#include "lists.h"

/**
 * insert_dnodeint_at_index - prints list element
 *
 * @h: Head of the doubly linked list
 * @idx: Index required
 * @n: Value to be inserted
 *
 * Return: Size of list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *parse, *ins;
	unsigned int i = 0;

	ins = malloc(sizeof(dlistint_t));
	if (ins == NULL)
		return (NULL);
	parse = *h;
	if (*h == NULL && idx == 0)
	{
		ins->n = n;
		ins->next = NULL;
		ins->prev = NULL;
		*h = ins;
		return (*h);
	}
	while (parse != NULL)
	{
		if (i == idx)
		{
			ins->n = n;
			ins->prev = parse->prev;
			ins->next = parse;
			if (parse->prev != NULL)
				parse->prev->next = ins;
			parse->prev = ins;
			if (i == 0)
				*h = ins;
			return (ins);
		}
		i++;
		if (parse->next == NULL && idx == i)
		{
			ins->n = n;
			ins->prev = parse;
			ins->next = NULL;
			parse->next = ins;
			return (ins);
		}
		parse = parse->next;
	}
	return (NULL);
}
