#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer dlistint_t input
 * @index: unsigned int input
 * Return: if the node does not exist, return NULL. else return node the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_index = head;
	unsigned int idx = 0;

	while (node_index && node_index->next)
	{
		if (idx == index)
			return (node_index);
		idx++;
		node_index = node_index->next;
	}
	if (node_index)
		if (idx == index)
			return (node_index);
	return (NULL);
}
