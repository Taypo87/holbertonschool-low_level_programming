#include "variadic_functions.h"

/**
 * sum_them_all - sums up a variable number of ints
 * @n: number of args passed
 * Return: sum of ints
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);
	return (sum);
}
