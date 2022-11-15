#include "lists.h"

/**
 * print_dlistint - prints a given list to standard out
 * @h: the list to print
 * Return: number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;


	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
