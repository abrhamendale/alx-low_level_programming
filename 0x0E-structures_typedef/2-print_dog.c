#include "main.h"

/**
 * print_dog - Initializes dog
 *
 * @d: Input struct
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
