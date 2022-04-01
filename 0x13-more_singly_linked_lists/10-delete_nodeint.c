#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 *  listint_t linked list.
 * @head: listint_t double pointer input
 * @index: unsigned int input
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *aux = *head;
	unsigned int i = 0;

	if (!head || !aux)
		return (-1);

	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}

	while (aux)
	{
		tmp = aux;
		if (i == index - 1)
			break;
		i++;
		aux = (aux)->next;
		if (aux)
			return (-1);
	}

	aux = (aux)->next;
	tmp->next = aux->next;
	free(aux);
	return (1);
}
