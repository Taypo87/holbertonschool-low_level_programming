#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of a list
 * @head: pointer to a pointer that points to the beginning of the list
 * @n: the data to be added to the new node
 * Return: pointer to the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);


	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if ((*head) != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
