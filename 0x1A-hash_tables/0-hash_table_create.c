#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: unsigned long int input, size of hash table
 * Return: pointer to the newly created hash table or
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_ht;

	new_ht = malloc(size * sizeof(hash_table_t));
	new_ht->size = size;
	for (i = 0; i < size; i++)
	{
		new_ht->array = NULL;
		new_ht++;
	}
	return (new_ht);
}
