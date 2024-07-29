#include "lists.h"

/**
 *print_list - Prints all the elements of a 'list_t' list
 *@h: First node of the list
 *
 *Return: The count of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int node_count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%d] %s\n", 0, current->str);
		else
			printf("[%d] %s\n", current->len, current->str);

		current = current->next;

		node_count++;
	}

	return (node_count);
}
