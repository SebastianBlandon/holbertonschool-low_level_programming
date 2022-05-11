#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: const dlistint_t input
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		number_nodes++;
		h = h->next;
	}
	return (number_nodes);
}
