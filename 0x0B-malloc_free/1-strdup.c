#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - creates space in memory and copies a string to it
 * @str: string to be copied
 * Return: NULL or pointer to copied string
 */

char *_strdup(char *str)
{
	char *strcpy;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;
	i++;
	strcpy = malloc(sizeof(*str) * i);
	if (strcpy == NULL)
		return (NULL);
	j = 0;
	while(str[j] != '\0')
	{
		strcpy[j] = str[j];
			j++;
	}
	return (strcpy);
}
