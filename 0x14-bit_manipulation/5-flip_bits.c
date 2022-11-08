#include "main.h"

/**
 * flip_bit - counts how many bits that need to be
 *              flipped to get from one number to another
 *
 * @n:the number
 * @m: the number to flip to
 * Return: the number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}
