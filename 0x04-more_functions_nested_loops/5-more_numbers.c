#include "main.h"
/**
 * more_numbers - prints 0 - 14, ten times
 *
 *
 *
 */
void more_numbers(void)
{
	int x = 0;
	int y;

		while (x > 10)
			  {
				  y = 0;
				  while (y > 15)
				  {
					  _putchar((y / 10) + '0');
					  _putchar((y % 10) + '0');
					  y++;
				  }
				  _putchar('\n');
				  x++;
			  }
}
