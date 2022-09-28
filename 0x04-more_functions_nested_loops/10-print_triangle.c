#include "main.h"
/**
 * print_triangle - prints a triangle of variable size
 * @size: determins size of triangle
 *
 *
 */
void print_triangle(int size)
{
int c, j;

for (c = 0; c < size; c++)
{
for (j = 1; j < (size - c); j++)
_putchar(' ');
for (j--; j < size; j++)
_putchar('#');
if (c < (size - 1))
_putchar('\n');
}
_putchar('\n');
}
