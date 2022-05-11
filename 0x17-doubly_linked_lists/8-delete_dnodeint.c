#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node in a dlistint_t linked list.
 * @head: double pointer dlistint_t input
 * @index: unsignd int input
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int idx = 0;

	if (!aux)
		return (-1);

	if (!aux->prev && !aux->next)
	{
		*head = NULL, free(aux);
		return (1);
	}

	while (aux)
	{
		if (idx == index)
		{
			if (idx == 0)
				*head = aux->next, (*head)->prev = NULL;
			else if (aux->prev || aux->next)
				(aux->prev)->next = aux->next, (aux->next)->prev = aux->prev;
			else
				(aux->prev)->next = NULL;
			free(aux);
			return (1);
		}
		idx++;
		aux = (aux)->next;
	}
	return (-1);
}
