#include "main.h"

/**
 * new_dog - Creates new dog
 *
 * @name: Name of dog
 * @age: Age
 * @owner: Owner of dog
 *
 * Return: Dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc((sizeof(char) * (strlen(name) + 1)
		+ (sizeof(double) + 1) + (sizeof(char) * (strlen(owner) + 1))) + 1);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
