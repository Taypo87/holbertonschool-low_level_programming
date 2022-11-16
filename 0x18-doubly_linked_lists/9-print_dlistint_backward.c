#include "lists.h"

/**
 * print_dlistint_backward - prints a list starting with the last node
 * @h:pointer to the list to print
 * Return: the number of nodes printed
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *node, *tail;
	size_t count = 0;

	node = h;

	while (node)
	{
		tail = node;
		node = node->next;
		count++;
	}

	while (tail)
	{
		printf("%i", tail->n);
		tail = tail->prev;
	}
	return (count);
}
