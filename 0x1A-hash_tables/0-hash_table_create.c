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
	hash_node_t *head, *parser;
	unsigned int counter = 0;

	printf("hash_table_create--------\n");
	first = malloc(sizeof(hash_table_t));
	head = NULL;
	if (head == NULL)
	{
		head = malloc(sizeof(hash_node_t));
		head->next = NULL;
		counter++;
	}
	while(counter <= size)
	{
		parser = malloc(sizeof(hash_node_t));
		parser->next = head;
		head = parser;
		counter++;
	}
	first->array = &head;
	return (first);
}

