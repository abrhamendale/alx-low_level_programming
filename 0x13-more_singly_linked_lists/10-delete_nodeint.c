#include "Lists.h"

/**
 * delete_nodeint_at_index - Prints all elements of a list
 *
 * @head: The head of the list
 * @index: Index of the element
 *
 * Return: Success (1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i = 0;
	listint_t *tmp, *p;

/*
    tmp = (listint_t *)malloc(sizeof(listint_t));
    if (tmp == NULL)
    {
        return (0);
    }
    tmp->next = NULL;
    */
	if (*head == NULL && index != 0)
	{
		return (0);
	}
	else if (*head == NULL && index == 0)
	{
		return (1);
	}
	p = *head;
	while (p->next != NULL)
	{
		if (i == index)
			break;
		tmp = p;
		i++;
		p = p->next;
	}
	if (i == index)
	{
		if(i == 0)
		{
			*head = (*head)->next;
			p->next = NULL;
			p->n = 0;
		}
		else
		{
			tmp->next = p->next;
			p->next = NULL;
			p->n = 0;
			return (1);
		}
	}
	return (0);
}

