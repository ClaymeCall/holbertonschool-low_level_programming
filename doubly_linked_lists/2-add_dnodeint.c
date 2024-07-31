#include "lists.h"

/**
 *add_dnodeint - Adds a node at the start of a list.
 *@head: Pointer to the first node of the list
 *@n: integer to write in the new node
 *
  Return: Address of the new node, of NULL if failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);


	/* Writing the new node */
	new_node->n = n;

	/* Handling new node being the only element of the list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Handling new node being added before an existing node */
	new_node->next = *head;
	new_node->prev = NULL;

	/* Making the old head point to the new node */
	(*head)->prev = new_node;

	/* Point head pointer to the new node */
	*head = new_node;
	return (new_node);
}
