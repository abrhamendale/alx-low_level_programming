#include "hash_tables.h"

/**
 * free_node - Frees each node list
 *
 * @h: Head of the list
 *
 * Return: 1 (SUCCESS)
 */
int free_node(hash_node_t *h)
{
	hash_node_t *p1, *p2;

	p1 = p2 = h;
	if (p1->next == NULL)
	{
		free(p1);
		return (1);
	}
	while (p2->next != NULL)
	{
		p2 = p1->next;
		h = p2;
		free(p1);
		p1 = p2;
	}
	free(p2);
	return (1);
}
/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: The hash table
 *
 * Returns: 1 (SUCCESS)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;

	if (ht != NULL)
	{
		while (index < ht->size)
		{
			if ((ht->array)[index] != NULL)
				free_node((ht->array)[index]);
			index++;
		}
		free(ht->array);
		free(ht);
	}
}
