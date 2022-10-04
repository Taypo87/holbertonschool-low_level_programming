#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s:string to be searched
 * @accept: byte to be searched for
 * Return: the matching byte or null if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
			s++;
	}
	return ('\0');
}
