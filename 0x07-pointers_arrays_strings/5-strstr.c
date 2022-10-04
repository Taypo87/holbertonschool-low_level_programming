#include "main.h"

/**
 * _strstr - finds substring occurence
 * @haystack: string to be checked
 * @needle: substring to be checked for
 * Return: pointer to beginning of substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack == *needle)
			{
				needle++;
				haystack++
			}
			else
				break;
		}
		if (*needle = '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
			
