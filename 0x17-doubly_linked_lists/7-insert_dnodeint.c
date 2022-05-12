#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node in a dlistint_t linked list.
 * @h: double pointer dlistint_t input
 * @idx: unsignd int input
 * @n: int input
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux = *h, *prev;
	unsigned int index = 1;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!idx || (!idx && !aux))
	{
		*h = new, new->prev = NULL, new->next = aux;
		return (new);
	}
	else if (idx == 1)
	{
		prev = *h, aux = (*h)->next, new->prev = prev;
		new->next = aux, prev->next = new;
		if (aux)
			aux->prev = new;
		return (aux);
	}
	for (; aux && index != idx; index++, aux = aux->next)
		prev = aux;
	if (idx == index && !aux)
	{
		if (prev)
		{
			new->prev = prev, new->next = NULL, prev->next = new;
			return (new);
		}
		free(new);
		return (NULL);
	}
	else if (idx != index && !aux)
	{
		free(new);
		return (NULL);
	}
	prev = aux, aux = aux->next, new->prev = prev, new->next = aux;
	prev->next = new, aux->prev = new;
	return (new);
}
