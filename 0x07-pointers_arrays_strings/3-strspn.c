#include "main.h"

/**
 * _strspn - finds the length of prefix substring
 * @s: variable holding the string
 * @accept: substring to be measured
 *
 * Return: prefix length in bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int x;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (x);
		}

		s++;
	}
}
