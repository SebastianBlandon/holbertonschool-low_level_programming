#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: listint_t double pointer input
 * @n: conts int input
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	tmp = *head;
	while (tmp && tmp->next)
		tmp = tmp->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (tmp)
		tmp->next = new;
	else
		*head = new;
	return (new);
}
