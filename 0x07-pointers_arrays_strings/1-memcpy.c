#include "main.h"

/**
 * _memcpy - copies one chunk of memory to another
 * @dest: to be copied to
 * @src: to be copied
 * @n: how many bytes to be copied
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{

		(dest[i]) = (src[i]);

	}
	return (dest);
}
