#include "Lists.h"

/**
 * print_listint - Prints all elements of a list
 *
 * @h: List
 *
 * Return: Size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h == NULL)
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * add_nodeint_end - Prints all elements of a list
 *
 * @head: Points to the head of the list
 * @n: Number
 *
 * Return: Pointer to the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *tmp, *p;

    tmp = (struct listint_s *)malloc(sizeof(listint_t));
    if (tmp == NULL)
    {
        return (NULL);
    }
    tmp->n = n;
    tmp->next = NULL;
    if (*head == NULL)
    {
        *head = tmp;
        return (tmp);
    }
    p = *head;
    while(p->next != NULL)
        p = p->next;
    p->next = tmp;
    return (p);
}
/**
 * free_listint - Prints all elements of a list
 *
 * @head: The head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
    if (head == NULL)
		return;
	free_listint(head->next);
	head->n = 0;
	free(head);
}

/**
 * free_listint2 - Prints all elements of a list
 *
 * @head: The head of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
    if (*head == NULL)
		return;
	free_listint((*head)->next);
	(*head)->n = 0;
	*head = NULL;
}
/**
 * sum_listint - Prints all elements of a list
 *
 * @head: Pointer to the head of the list
 *
 * Return: Sum of the data of the elements
 */
int sum_listint(listint_t *head)
{
    listint_t *tmp;
    int sum = 0;

    if (head == NULL)
        return (0);
    tmp = head;
    while(tmp != NULL)
    {
        sum = sum + (tmp->n);
        tmp = tmp->next;
    }
    return (sum);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int sum;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    sum = sum_listint(head);
    printf("sum = %d\n", sum);
    free_listint2(&head);
    return (0);
}
