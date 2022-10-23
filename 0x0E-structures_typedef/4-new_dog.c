#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: pointer to name of dog
* @age: pointer to age of dog
* @owner: pointer to owner of dog
* Return: pointer to new dog of type dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen = 0, ownerLen = 0, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	while (name[nameLen] != '\0')
		nameLen++;
	d1->name = malloc(nameLen * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i < nameLen; i++)
		d1->name[i] = name[i];
	d1->age = age;
	while (owner[ownerLen] != '\0')
		ownerLen++;
	d1->owner = malloc(ownerLen * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
