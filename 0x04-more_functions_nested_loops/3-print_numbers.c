#include "main.h"
/**
 * print_numbers - prints 0-9
 * @i carrier variable
 * Description: prints 0-9
 * Return: 0
 *
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar (i + '0');
}
	_putchar ('\n');
}
