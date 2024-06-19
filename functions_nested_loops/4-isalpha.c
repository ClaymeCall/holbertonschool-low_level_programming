#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 *@c: int to compare with ASCII key column
 *
 *
 * Return: 1 if alphabetic, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
