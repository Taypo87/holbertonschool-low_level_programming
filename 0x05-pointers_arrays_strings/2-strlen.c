#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: the string being tested
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
