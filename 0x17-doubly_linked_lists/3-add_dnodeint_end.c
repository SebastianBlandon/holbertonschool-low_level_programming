#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer dlistint_t input
 * @n: const int input
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	while (aux && aux->next)
		aux = aux->next;
	if (aux)
		aux->next = new, new->prev = aux;
	else
		*head = new, new->prev = NULL;
	return (new);
}
