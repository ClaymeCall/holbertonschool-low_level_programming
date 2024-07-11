#include "dog.h"

/**
 *print_dog - Prints all elements of a struct dog type object.
 *@d: Pointer to the dog to be printed
 *
 *Return: void
 */
void print_dog(dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Name: %s\n", d->owner);

}
