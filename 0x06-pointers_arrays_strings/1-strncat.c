#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: holds the string to be added to
 * @src: holds the string to be added
 * @n: how many bytes to copy
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int temp = 0;

while (dest[index] != '\0')
{
index++;
}
while (temp < n && src[temp] != '\0')
{
dest[index] = src[temp];
index++;
temp++;
}
dest[index] = '\0';
return (dest);
}
