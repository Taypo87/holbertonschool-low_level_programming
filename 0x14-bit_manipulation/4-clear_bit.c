#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to a bit
 * @index: index of the location the the bit to be changed
 * Return: -1 on error, 1 on success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
