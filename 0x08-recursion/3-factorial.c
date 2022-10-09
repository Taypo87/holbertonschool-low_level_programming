#include "main.h"

/**
 * factorial - finds the factorial of a given number
 * @n: number to check
 * Return: the factorial or -1 for an error
 */

int factorial(int n)
{
	if (n < 0)
	       {
		       return (-1);
	       }
	if (n == 0 || n == 1)
	{
		return (1);
	}
	 return (n * factorial(n - 1));
}
