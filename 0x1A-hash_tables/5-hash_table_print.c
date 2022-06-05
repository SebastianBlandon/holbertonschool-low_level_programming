#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash_table_t pointer input
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, first = 1;
	hash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp)
		{
			if (!first)
				printf(", ");
			while ((tmp = tmp->next))
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
			}
			first = 0;
		}
	}
	printf("}\n");
}
