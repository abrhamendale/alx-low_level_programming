#include "main.h"

/**
 * free_dog - Creates new dog
 *
 * @d: Input struct
 *
 * Return: Dog struct
 */
void free_dog(dog_t *d)
{
	free(d);
}
