#include "main.h"

/**
 * _strchr - locates character in string
 * @s: string to be checked
 * @c: character to be located
 * Return: address of first occurance or null
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (NULL);
}
