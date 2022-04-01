#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: listint_t double pointer input
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = *head, *swap;

	if (!*head || !head)
		return (NULL);

	if (!(*head)->next)
		return (*head);

	(*head) = aux->next;
	swap = (*head)->next;
	aux->next = NULL;

	while (swap)
	{
		(*head)->next = aux;
		aux = (*head);
		(*head) = swap;
		swap = (*head)->next;
	}

	(*head)->next = aux;
	return (*head);
}
