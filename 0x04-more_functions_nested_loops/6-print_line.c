#include "main.h"
/**
 * print_line - prints a line
 * @n: defines how long the line is
 * Description: draws a line, length dependant on variable
 * Return: void
 */
void print_line(int n)
{

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n <= 0)
	{
		_putchar('\n');
				}

}
