#include "main.h"

/**
 * binary_to_uint - converts a binary number to decimal
 * @b: pointer to a string of 1s and 0s
 * Return: the converted number or
 *         Null if b contains characters other than 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len = 0;

	if (b == '\0')
		return (0);

	while (b[len] != '\0')
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
