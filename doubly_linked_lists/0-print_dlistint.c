#include "lists.h"

/**
 *print_dlistint - Prints all the elements of a 'dlistint_t' list
 *@h: First node of the list
 *
 *Return: The count of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int node_count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}
