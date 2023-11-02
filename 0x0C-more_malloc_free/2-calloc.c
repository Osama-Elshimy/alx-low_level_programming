#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory,
 * NULL if nmemb or size is 0 or on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (int)(nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
