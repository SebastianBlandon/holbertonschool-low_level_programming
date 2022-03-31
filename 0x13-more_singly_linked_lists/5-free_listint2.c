#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: listint_t double pointer input
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
