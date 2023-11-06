#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a variable of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
