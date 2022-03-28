#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: const list_t pointer input
 * Return: The number of nodes.
 * If str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
