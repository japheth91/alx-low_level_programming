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
	struct dog *newDog;
	int i;
	int lenName = 0;
	int lenOwner = 0;

	for (i = 0; lenName != '\0'; i++)
		lenName++;
	for (i = 0; lenOwner != '\0'; i++)
		lenOwner++;
	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(char) * lenName + 1);
	if (newDog->name == NULL)
		return (NULL);
	newDog->owner = malloc(sizeof(char) * lenOwner + 1);
	if (newDog->owner == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		newDog->name[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		newDog->owner[i] = owner[i];
	newDog->age = age;
	return (newDog);
}
