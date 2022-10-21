#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 *
 * @key: Key
 * @size: Size of the table
 *
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int d = 0;
	unsigned long int k = 0;

	k = hash_djb2((unsigned char *)key);
	d = k % size;
	return (d);
}
