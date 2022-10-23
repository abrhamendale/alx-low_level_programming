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

	if (ht == NULL)
		return;
	parser = (ht->array)[counter];
	if (ht->array == NULL)
		printf("{}\n");
	printf("{");
	while (ht != NULL && counter < ht->size)
	{/*printf("%lu\n", counter);*/
		parser = (ht->array)[counter];
		if (parser != NULL)
		{
			if (parser->key != NULL && parser->value != NULL)
			{
				while (parser != NULL)
				{
					if (parser->key != NULL && print == 1)
						printf(", ");
					printf("'%s': '%s'", parser->key, parser->value);
					print = 1;
					parser = parser->next;
				}
				print = 1;
			}
		}
		counter++;
	}
	printf("}\n");
}
