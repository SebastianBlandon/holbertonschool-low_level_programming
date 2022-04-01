#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: listint_t double pointer input
 * @idx: unsigned int input
 * @n: int input
 * Return: sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux = *head, *tmp;
	unsigned int i = 0;

	if (!aux || !head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (!idx)
	{
		new->n = n;
		new->next = aux;
		*head = new;
		return (new);
	}
	idx--;
	while (aux)
	{
		tmp = aux;
		if (i == idx)
			break;
		i++;
		aux = (aux)->next;
	}
	aux = (aux)->next;
	new->n = n;
	new->next = aux;
	tmp->next = new;
	return (new);
}
