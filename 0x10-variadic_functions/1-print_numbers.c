#include "variadic_functions"

/**
 * print_numbers - prints out numbers
 * @separator: sepeartes each int
 * @n: nummber of arguments
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsuigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");

}
