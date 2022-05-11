#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: const dlistint_t input
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		number_nodes++;
		h = h->next;
	}
	return (number_nodes);
}
