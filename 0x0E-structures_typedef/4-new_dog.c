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
	char *n;
	char *o;

	n = name;
	o = owner;
	d = malloc((sizeof(char) * (sizeof(n)) + (sizeof(double))
				+ (sizeof(char) * (sizeof(o)))));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
