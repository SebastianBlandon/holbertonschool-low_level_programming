#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list_t pointer input
 * Return: Nothing
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
