#include "main.h"

/**
 * get_bit - gets the value of a bit at the given index
 * @n: the bit
 * @index: the index the bit is found
 * Return: -1 on error, otherwise the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
