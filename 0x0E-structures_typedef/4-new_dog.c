#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	unsigned int i, lenName = 0, lenOwner = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	for (lenName = 0; name[lenName]; lenName++)
		;
	lenName++;
	newDog->name = malloc(lenName * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < lenName; i++)
		newDog->name[i] = name[i];
	newDog->age = age;
	for (lenOwner =0; owner[lenOwner]; lenOwner++)
		;
	lenOwner++;
	newDog->owner = malloc(lenOwner * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < lenOwner; i++)
		newDog->owner[i] = owner[i];
	return (newDog);
}
