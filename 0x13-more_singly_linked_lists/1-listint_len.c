#include "Lists.h"

/**
 * print_listint - Prints all elements of a list
 *
 * @h: Pointer to the head of the list
 *
 * Return: Size of the list
 */
size_t listint_len(const listint_t *h)
{
	struct listint_s *tmp;
	int count = 0;

	tmp = h;
	if (tmp == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		tmp= tmp->next;
		count++;
	}
	return (count);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;
	n = listint_len(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}
