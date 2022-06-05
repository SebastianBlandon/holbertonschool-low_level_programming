#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash_table_t pointer input
 * @key: const char pointer input
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (!tmp)
		return (NULL);

	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			break;
		tmp = tmp->next;
	}

	if (!tmp)
		return (NULL);

	return (tmp->value);
}
