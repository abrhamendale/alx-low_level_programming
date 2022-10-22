#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the hash table
 *
 * Return: Pointer to the table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *first;

	first = malloc(sizeof(hash_table_t));
	if (first == NULL)
		return (NULL);
	first->size = size;
	first->array = malloc(sizeof(hash_node_t *) * first->size);
	if (first->array == NULL)
		return (NULL);
	return (first);
}

