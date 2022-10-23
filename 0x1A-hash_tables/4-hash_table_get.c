#include "hash_tables.h"

/**
 * hash_table_get - Retrives a value from the hash table
 *
 * @ht: Pointer to the hash table
 * @key:The key
 *
 * Return: A value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *parser;
	unsigned long int index = 0, counter = 0;

	if (key == NULL || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	parser = (ht->array)[0];
	while (parser == NULL)
	{
		parser = (ht->array)[counter];
		counter++;
	}
	parser = (ht->array)[index];
	if (parser == NULL)
		return (NULL);
	if (parser->key == key)
		return (parser->value);
	while (parser)
	{
		if (parser->key == key)
			return (parser->value);
		parser = parser->next;
	}
	return (NULL);
}
