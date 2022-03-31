#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: const list_t pointer input
 * Return: The number of nodes.
 * If str is NULL, print [0] (nil)
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
