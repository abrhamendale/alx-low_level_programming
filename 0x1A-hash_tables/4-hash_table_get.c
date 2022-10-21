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
	hash_node_t *parser1, *parser2;
	unsigned long int index = 0, counter = 0;

	printf("hash_table_get-----------------\n");
	index = key_index((const unsigned char *)key, 1024);
	parser1 = parser2 = *(ht->array);
	if (key == NULL || ht == NULL)
		return (NULL);
	printf("Index:%lu\n", index);
	while (counter <= index && parser1 != NULL)
	{printf("22222\n");
		if (counter == index)
		{
			printf("---Key:%s ---Value:%s\n", key, parser1->value);
			return (parser1->value);
			printf("Index:%lu\n", counter);
		}
		parser1 = parser1->next;
		counter++;
	}
	return (NULL);
}
