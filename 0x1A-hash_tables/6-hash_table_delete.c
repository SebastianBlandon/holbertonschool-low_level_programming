#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash_table_t pointer input
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *aux;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			aux = tmp;
			tmp = tmp->next;
			free(aux->key);
			free(aux->value);
			free(aux);
		}
	}

	free(ht->array);
	free(ht);
}
