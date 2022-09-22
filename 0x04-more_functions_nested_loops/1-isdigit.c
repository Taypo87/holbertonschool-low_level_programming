#include "main.h"
/**
 * _isdigit - checks if character is a digit
 * @c: carrier variable
 * Description: returns 1 or 0
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
