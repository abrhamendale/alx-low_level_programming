#include "main.h"

/**
 * init_dog - Initializes dog
 *
 * @d: Input struct
 * @name: Name of instance
 * @age: Age of instance
 * @owner: Owner of instance
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
