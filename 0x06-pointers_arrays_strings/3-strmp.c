#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to be compared
 * Return: 1 for equal 0 for unequal
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

		while (*s1 != '\0' || *s2 != '\0')
		{
			if (*s1 == *s2)
			{
				*s1++;
				*s2++;
			}
			else if (( *s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0') || *s1 != *s2)
			{
				return (1);
			}
		}
		else
			return (0);
}
