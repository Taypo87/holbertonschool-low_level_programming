#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a list
 * @head: pointer to a pointer to the beginnning of a list
 * @n: data to be filled in new node
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistiint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	while (*(head)->next != NULL )
	{
		new->prev = (*(head))->next;
	        if (*(head)->next == NULL)
			(*(head)->prev = new);
	}
	return (new);
}
