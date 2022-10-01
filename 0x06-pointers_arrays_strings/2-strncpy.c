#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: to be copied to
 * @n: variable
 * @src:string to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
			i++;

	}
	return (dest);
}
