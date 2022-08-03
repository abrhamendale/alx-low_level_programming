#include "main.h"
#include "dog.h"

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

	d = malloc((sizeof(char) * (sizeof(name)) + (sizeof(double))
				+ (sizeof(char) * (sizeof(owner)))));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	name = NULL;
	owner = NULL;
	return (d);
}
