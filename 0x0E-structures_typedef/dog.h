#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct function of a dog
 * @name: function paramter
 * @age: function parameter
 * @owner: function parameter
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
