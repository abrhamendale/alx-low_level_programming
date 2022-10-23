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
	unsigned long int counter = 0, print = 0;

	parser = (ht->array)[counter];
	if (ht->array == NULL)
		printf("{}\n");
	printf("{");
	while (ht != NULL && counter < 1024)
	{/*printf("%lu\n", counter);*/
		parser = (ht->array)[counter];
		if (parser != NULL)
		{
			if (parser->key != NULL && print == 1)
				printf(", ");
			if (parser->key != NULL && parser->value != NULL)
			{
				printf("'%s': '%s'", parser->key, parser->value);
				print = 1;
			}
		}
		counter++;
	}
	printf("}\n");
}
