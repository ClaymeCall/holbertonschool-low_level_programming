#include "main.h"

/**
 *_strlen_recursion - Returns the length of a string using recursion
 *@s: The string to measure
 *
 *Return: The length, as int
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0;
}
