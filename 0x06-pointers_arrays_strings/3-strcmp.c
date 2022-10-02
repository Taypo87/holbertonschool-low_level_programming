#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to be compared
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
int x = 0;

while (*s1 != '\0' || *s2 != '\0')
{
if (s1[x] != s2[x])
{
return (s1[x] - s2[x]);
}
x++;
}
return (0);
}
