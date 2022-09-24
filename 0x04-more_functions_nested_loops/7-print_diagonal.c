#include "main.h"

void print_diagonal(int n)
{
	int y = n;
	int x = 0;
	while (y > 0)
	{
		_putchar('\\');
		_putchar('\n');
			 y--;
			 while (x < n)
			 {
				 _putchar(' ');
					 x++;
			 }
	}
	_putchar('\n');
}
