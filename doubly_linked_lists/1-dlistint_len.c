#include "lists.h"

/**
 *dlistint_len.c - Returns the count of elements in a list.
 *@h: Pointer to the head of the list.
 *
 *Return: Count of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
