#include "dog.h"

/**
 *_strlen - Measures the length of a string.
 *@s: Pointer to the string we want to measure.
 *
 * Return: length of string as integer
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s)
	{
		s++;
		counter++;
	}
	return (counter);
}

/**
 *_strcpy- Copies one string into another.
 *@dest: Pointer to the string that will be written.
 *@src: Pointer to the string that will be copied.
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Function that creates a new dog.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
