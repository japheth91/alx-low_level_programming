#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initialises the variable of struct function
 * @name: function parameter
 * @age: function paramter
 * @owner: function paramter
 * @d: pointer to the structure
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
