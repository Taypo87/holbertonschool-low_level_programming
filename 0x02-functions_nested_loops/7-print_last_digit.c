#include "main.h"
/**
 *
 *
 *
 *
 */
int print_last_digit(int n)
{
	int r = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(r + '0');
        return (r);
}
