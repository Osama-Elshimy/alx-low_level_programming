#include "dog.h"
#include <stdlib.h>

/**
 * copy_string - Copies a string to a new memory location
 * @src: Pointer to the source string
 *
 * Return: Pointer to the new string
 */

char *copy_string(char *src)
{
	char *dest;
	int length = 0, i;

	while (src[length] != '\0')
		length++;

	dest = malloc(length + 1);
	if (dest == NULL)

		return (NULL);

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = copy_string(name);
	new_dog->owner = copy_string(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

