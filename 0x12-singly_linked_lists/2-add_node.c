#include "lists.h"

/**
 * add_node - adds a node to the begining of the list list_t
 * @head: a pointer to the head of list_t
 * str: the str to be added to list_t list
 * Return: Null on error, otherwise address of new element
 */

list_t *add_node(list_t **head, const char *str)
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

	while (str[len] != "\0")
		len++;

	new->str = str2;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
