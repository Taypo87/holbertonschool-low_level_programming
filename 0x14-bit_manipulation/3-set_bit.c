#include "main.h"

/**
 * set_bit - sets the value of a bit at the index to 1
 * @n: pointer to teh bit
 * @index: the index of the bit to be set
 * Return: -1 on error, 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
