#include "lists.h"

/**
 * list_len - finds and returns the length of list_t
 * @h: the linked list
 * Return: the number of nodes
 */



size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
