#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash_table_t pointer input
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, aux_size;
	hash_node_t *tmp, *aux;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	aux_size = ht->size;
	for (i = 0; i < aux_size; i++)
	{
		tmp = ht->array[i];
		while ((aux = tmp))
		{
			tmp = tmp->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}

	free(ht->array);
	free(ht);
}
