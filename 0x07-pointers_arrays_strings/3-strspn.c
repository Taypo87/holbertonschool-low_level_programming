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
	unsigned int l = 0;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0' && accept[x] != s[i]; x++)
			;
		if (s[i] == accept[x])
			l++;
		if (accept[x] == '\0')
			return (l);
	}
	return (l);
}
