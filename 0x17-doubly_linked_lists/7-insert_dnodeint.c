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
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!aux && !idx)
	{
		new->prev = NULL, new->next = NULL, *h = new;
		return (new);
	}
	if (!idx)
	{
		new->prev = NULL, new->next = aux, aux->prev = new, *h = new;
		return (new);
	}


	while (aux)
	{
		if (idx == index)
		{
			new->prev = (aux)->prev;
			new->next = aux;
			(aux->prev)->next = new;
			(aux)->prev = new;
			return (new);
		}
		index++;
		prev = aux;
		aux = (aux)->next;
	}
	if (idx == index)
	{
		prev->next = new, new->prev = prev, new->next = NULL;
		return (new);
	}
	free(new);
	return (NULL);
}
