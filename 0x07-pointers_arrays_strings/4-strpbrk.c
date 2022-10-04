#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s:string to be searched
 * @accept: byte to be searched for
 * Return: the matching byte or null if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (accept[i])
		i++;
	if (accept[i] == s[i])
	{
		return (&s[i]);
	}
	return (NULL);
}
