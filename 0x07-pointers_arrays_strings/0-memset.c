#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:space to be filled
 * @b:constant byte
 * @n:Number of spaces to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
