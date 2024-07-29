#include "lists.h"

/**
 *list_len - Function that calculates the count of nodes in a list
 *@h: First node of the list
 *
 *Return: The count of nodes in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int node_count = 0;

	while (current != NULL)
	{
		current = current->next;

		node_count++;
	}

	return (node_count);
}
