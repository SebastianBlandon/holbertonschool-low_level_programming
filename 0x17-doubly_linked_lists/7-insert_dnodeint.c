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
	dlistint_t *new, *aux = *h;
	unsigned int index = 0;

	if (!aux)
		return (NULL);

	while (aux)
	{
		if (idx == index)
		{
			new = malloc(sizeof(dlistint_t));
			new->n = n;
			new->prev = (aux)->prev;
			new->next = aux;
			(aux->prev)->next = new;
			(aux)->prev = new;
			return (new);
		}
		index++;
		aux = (aux)->next;
	}
	return (NULL);
}
