#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: NULL if size is 0 or if malloc fails, pointer to the array if
 * successful
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
