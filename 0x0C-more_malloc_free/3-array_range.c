#include "main.h"

/**
 * array_range - creates an array of integers, from min to max
 * @min: starting value for the array
 * @max: end value for the array
 * Return: Null if min > max or function fails
 *         otherwise returns a pointer to the array
 */


int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)

		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)

		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
