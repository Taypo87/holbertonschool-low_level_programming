#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the string to be added to
 * @src: the string to add
 * Return: pointer to dest string
 *
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, temp = 0;

	while (dest[index++] != '\0')
		temp++;

	for (index = 0; src[index] != '\0'; index++)
		dest[temp++] = src[index];

	return (dest);
}
