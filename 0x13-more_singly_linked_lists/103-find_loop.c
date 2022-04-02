#include "lists.h"

/**
 * *find_listint_loop - finds the loop in a linked list.
 * @head: listint_t pointer input
 * Return: The address of the node where the loop starts,
 *  or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head, *aux;

	if (!current)
		return (NULL);

	while (current)
	{
		aux = current;
		current = current->next;

		if (current >= aux)
		{
			return (current);
		}
	}
	return (NULL);
}
