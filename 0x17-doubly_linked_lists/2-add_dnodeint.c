#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer dlistint_t input
 * @n: const int input
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (!aux)
		new->next = NULL;
	else
	{
		while (aux->prev)
			aux = aux->prev;
		aux->prev = new;
		new->next = aux;
	}
	*head = new;
	return (*head);
}
