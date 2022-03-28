#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: const list_t pointer input
 * Return: size_t nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
