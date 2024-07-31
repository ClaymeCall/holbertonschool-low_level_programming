#include "lists.h"

/**
 *insert_dnodeint_at_index - Inserts a new node a nth place in a list.
 *@h: Double pointer to the head of the list
 *@idx: Index of the new node.
 *@n: Data to write in the new node.
 *
 *Return: The address of the new node, or NULL if failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr = *h;
	unsigned int curr_node_index = 0;

	/* Creating the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* If inserting at the head of the list */
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	/* Else, getting a pointer to the node before the desired slot*/
	while (curr_node_index < idx - 1)
	{
		if (ptr->next == NULL)
			return (NULL);

		ptr = ptr->next;
		curr_node_index++;
	}

	/* Making new node point to its neighbours */
	new_node->prev = ptr;
	new_node->next = ptr->next;

	/* Making the neighbours point to the new node */
	if (ptr->next != NULL)
		ptr->next->prev = new_node;
	ptr->next = new_node;

	return (new_node);
}
