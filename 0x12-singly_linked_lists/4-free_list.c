#include "lists.h"

/**
 * free_list - iterates through a list and frees each node
 * @head: adress of the head node in the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
