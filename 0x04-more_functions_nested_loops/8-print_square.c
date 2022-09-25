#include "main.h"

/**
* print_square - creates a square
* @size: variable dictaes size of square
*
*
*/
void print_square(int size)
{
int row = size;
int count;

while (row > 0)
{
count = size;
while (count > 0)
{
_putchar('#');
count--;
}
row--;
_putchar('\n');

}
_putchar('\n');
}
