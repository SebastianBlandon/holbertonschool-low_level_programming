#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer dlistint_t input
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
