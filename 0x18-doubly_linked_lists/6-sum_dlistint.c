#include "lists.h"

/**
 * sum_dlistint - adds the values stored in each node
 * @head: pointer to the first node the the list
 * Return: the sum of all values in the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (0);
	node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
