#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: listint_t pointer input
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
