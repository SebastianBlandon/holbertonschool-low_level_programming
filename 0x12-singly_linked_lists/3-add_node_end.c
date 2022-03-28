#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: list_t double pointer input
 * @str: conts char pointer input
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	tmp = *head;
	while (tmp && tmp->next)
		tmp = tmp->next;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;
	if (tmp)
		tmp->next = new;
	else
		*head = new;
	return (new);
}
