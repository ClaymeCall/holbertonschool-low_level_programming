#include "lists.h"

/**
 *add_dnodeint_end - Adds a node at the end of a dlistint_t list.
 *@head: Double pointer to the first node.
 *@n: Value to be written in the new node.
 *
 *Return: The address of the new node or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr;

	if (new_node == NULL)
		return (NULL);

	/* Writing in the node */
	new_node->n = n;
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	 ptr = *head;

	/* Pointing to the tail of the list */
	while (ptr->next != NULL)
		ptr = ptr->next;

	/* Adding the new node at the end of the list */
	new_node->prev = ptr;
	ptr->next = new_node;

	return (new_node);
}
