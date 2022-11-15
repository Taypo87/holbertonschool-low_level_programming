#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a list
 * @head: pointer to a pointer to the beginnning of a list
 * @n: data to be filled in new node
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	last = *head;

	while (last->next != NULL )
		last = last->next;

	last->next = new;
	new->prev = last;

	return (new);
}
