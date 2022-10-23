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

	/*printf("hash_table_get-----------------\n");*/
	index = key_index((const unsigned char *)key, 1024);
	parser = (ht->array)[0];
	while (parser == NULL)
	{
		parser = (ht->array)[counter];
		counter++;
		/*printf("C:%lu\n", counter);*/
	}
	parser = (ht->array)[index];
	if (key == NULL || ht == NULL)
		return (NULL);
	/*printf("Index:%lu\n", index);
	while (counter <= index && parser != NULL)
	{printf("Counter:%lu\n", counter);
		if (counter == index)
		{
	printf("Index:%luht:%p\n", index, (void *)ht);*/
	if (parser == NULL)
		return (NULL);
	/*printf("---Key:%s ---Value:%s\n", key, parser->value);*/
	return (parser->value);
	/*
	printf("Index:%lu Counter:%lu\n", index, counter);
	parser = parser->next;*/
}
