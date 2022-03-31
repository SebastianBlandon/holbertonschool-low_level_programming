#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: const listint_t pointer input
 * Return: size_t nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
