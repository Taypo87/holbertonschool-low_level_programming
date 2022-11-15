#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a given list
 * @h: the list to check
 * Return: the number of nodes in a given list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
