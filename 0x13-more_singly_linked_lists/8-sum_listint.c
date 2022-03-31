#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: listint_t pointer input
 * Return: sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
