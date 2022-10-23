#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: Pointer to the hash table
 * @key:The key
 * @value: The value
 *
 * Return: 1 if SUCCESS
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *parser, *top;
	unsigned long int index = 0;

	/*printf("hash_table_set-----------------\n");*/
	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	top = (ht->array)[index];
	if (top != NULL)
	{
		/*printf("\nKey:%s Index:%lu Value:%s\n", key, index, top->value);*/
		parser = malloc(sizeof(hash_node_t));
		if (parser == NULL)
			return (0);
		parser->value = (char *)value;
		parser->key = (char *)key;
		parser->next = top;
		top = (ht->array)[index] = parser;
	}
	else
	{
		top = (ht->array)[index] = malloc(sizeof(hash_node_t));
		if (top == NULL)
			return (0);
		top->key = (char *)key;
		top->value = (char *)value;
		top->next = NULL;
	}
	return (1);
}
