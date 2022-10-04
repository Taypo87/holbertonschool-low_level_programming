#include "main.h"

/**
 * _strchr - locates first occurance of a character
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
return (0);
}
