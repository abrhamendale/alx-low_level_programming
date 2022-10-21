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
	hash_node_t *parser1, *parser2;
	unsigned long int index = 0, counter = 0;

	printf("hash_table_set-----------------\n");
	index = key_index((const unsigned char *)key, 1024);
	parser1 = parser2 = *(ht->array);
	if (key == NULL)
		return (0);
	while (counter <= index && parser1 != NULL)
	{
		if (counter == index)
		{
			printf("Before:%s New:%s\n", parser1->value, value);
			parser1->value = (char *)value;
			parser1->key = (char *)key;
			printf("After:%s Index:%lu\n", parser1->value, counter);
			return (1);
		}
		if (parser1->value != NULL)
			printf("Saved:%s\n", parser1->value);
		parser1 = parser1->next;
		counter++;
	}
	return (1);
}
