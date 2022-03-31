#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: listint_t double pointer input
 * Return: the head node’s data (n).
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head)
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
