#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: listint_t pointer input
 * @index: unsigned int input
 * Return: the node nth depending index
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
