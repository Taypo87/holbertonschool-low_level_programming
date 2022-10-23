#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable type struct dog
 * @d: dog to be initialized
 * @name: dame of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
