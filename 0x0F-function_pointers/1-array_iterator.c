#include <stddef.h>

/**
 * array_iterator - Execute a function on each element of an array
 *
 * @array: array
 * @size: size of array
 * @action: callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
