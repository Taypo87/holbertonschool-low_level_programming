#include "main.h"

/**
 * _calloc - allocates memory for an array of integers, sets mem to zero
 * @nmemb: number of elements in the array
 * @size: byte size of each element
 * Return: If array or byte size zero, or function fails return NULL
 *         Otherwise return pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;


	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		mem[i] = 0;
	return (mem);
}
