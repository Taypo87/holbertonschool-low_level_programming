#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: variable contains string to be written
 *
 */
void print_rev(char *s)
{
	int length = 0, strng = *s;

	while (s[strng]++)
		length++;
	for (strng = length - 1; strng >= 0; strng--)
		_putchar(s[strng]);
	_putchar('\n');
}
