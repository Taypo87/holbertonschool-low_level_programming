#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node at a given index
 * @head: pointer to the beginning of a list
 * @index: the value corresponding to the node to be found
 * Return: pointer to the node or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node = head;

	while (i < index)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
		i++;
	}
	return (node);
}
