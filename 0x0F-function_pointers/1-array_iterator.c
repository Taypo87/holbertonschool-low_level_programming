#include "function_pointers.h"

/**
 * array_iterator - function executes function on array
 * @array: pointer to array
 * @size: number of elements in array
 * @action: pointer to a function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
