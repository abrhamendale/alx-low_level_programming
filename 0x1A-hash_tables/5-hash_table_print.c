#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table
 *
 * @ht: Pointer to the hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *parser;
	unsigned long int counter = 0;

	printf("hash_table_print-----------------\n");
	parser = *(ht->array);
	if (ht == NULL)
		printf("{1}\n");
	printf("{");
	while (parser->next != NULL)
	{
		if (parser->key != NULL && parser->value != NULL)
			printf("%s: %s", parser->key, parser->value);
		parser = parser->next;
		counter++;
		if (parser != NULL)
			printf(", ");
	}
	printf("}\n");
}
