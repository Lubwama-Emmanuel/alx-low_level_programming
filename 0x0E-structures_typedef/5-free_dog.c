#include "dog.h"
/**
 * free_dog - fxn that free dog
 *
 * @d: a pointer to the dog struct
 * Return: void returns nothing
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
