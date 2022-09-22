#include "main.h"
/**
 * _isupper - checks if letter is lower case
 * @c: variable
 * Description: returns 1 or 0
 * Return: 1 if lower 0 if not
 */
int _isupper(int c)
{
	if ( c >= 65  && c <= 90 )
	{
		return (1);
	}
	else
	{
		return (0);
			}
}
