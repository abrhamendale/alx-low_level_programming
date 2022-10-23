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

	index = key_index((const unsigned char *)key, 1024);
	parser = (ht->array)[0];
	while (parser == NULL)
	{
		parser = (ht->array)[counter];
		counter++;
	}
	parser = (ht->array)[index];
	if (key == NULL || ht == NULL)
		return (NULL);
	if (parser == NULL)
		return (NULL);
	return (parser->value);
}
