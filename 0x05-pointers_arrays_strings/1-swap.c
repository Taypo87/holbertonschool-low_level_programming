#include "main.h"
/**
 * swap_int - swaps the value of a and b
 * @a: integar value to swap
 * @b: integar value to swap
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
