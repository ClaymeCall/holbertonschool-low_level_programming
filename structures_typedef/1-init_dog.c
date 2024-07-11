#include "dog.h"

/**
 *init_dog - Initializes a new variable of type struct dog.
 *@d: Pointer to the new dog.
 *@name: Name of the dog, as char *.
 *@age: Age of the new dog, as float.
 *@owner: Name of the owner, as char*.
 *
 *Return: void
 */
void init_dog(dog *d, char *name, float *age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
