#include "lists.h"

/**
 * sum_dlistint - sum all data of a dlistint_t linked list.
 * @head: pointer dlistint_t input
 * Return: if the list is empty, return 0. else return sum all data.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
