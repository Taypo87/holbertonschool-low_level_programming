#include "lists.h"

/**
 * free_dlistint - frees a given list
 * @head: pointer to the beginning of a list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
