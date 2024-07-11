#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 *struct dog - Type containing all infos relative to a dog
 *@name: Name of the dog, as char *
 *@age: Age of the dog, as float
 *@owner: Name of the owner, as char *
 *
 *Description: This file stores all info relative to the data structure dog,
 *and linked function prototypes.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
