#include "main.h"

/**
 *
 *
 *
 */
void puts2(char *str)
{
	int x;
	int length;

        while (str[x++])
	       length++;

        for (x = 0; x < length; x += 2)
	       _putchar(str[x]);

	_putchar('\n');


}
