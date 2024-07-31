#include "lists.h"

/**
 *get_dnodeint_at_index - Returns a pointer to a desired node in a list.
 *@head: Pointer to the head of the list.
 *@index: Index of the desired node.
 *
 *Return: Pointer to the n-th node of the list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int counter = 0;

	while (ptr != NULL)
	{
		if (counter == index)
			return (ptr);

		counter++;
		ptr = ptr->next;
	}

	return (NULL);
}
