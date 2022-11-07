#include "lists.h"

/**
 * add_node_end - finds the end of a linked list and adds a node,
 * @head: pointer to the begining of the linked list
 * @str: string to be copied and added to new node
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str2;
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->str = str2;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
