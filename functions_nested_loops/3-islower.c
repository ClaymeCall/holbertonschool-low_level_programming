#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *@c: int to compare with ASCII key column
 *
 *
 * Return: 1 if lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
