#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash_table_t pointer input
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i, first = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			if (first == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			while ((tmp = tmp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
			}

			first = 1;
		}
	}

	printf("}\n");
}
