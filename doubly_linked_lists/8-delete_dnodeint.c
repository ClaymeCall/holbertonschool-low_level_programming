#include "lists.h"

/**
 *delete_dnodeint_at_index - Deletes the nth node of a list.
 *@head: Double pointer to the head of the list.
 *@index: Index of the node to delete.
 *
 *Return: 1 if success, or -1 if failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int curr_node_index = 0;

	if (*head == NULL)
		return (-1);

	/* If deleting the head of the list */
	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(ptr);
		return (1);
	}

	/* Getting a pointer to the node before the one to delete */
	while (curr_node_index < index)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		curr_node_index++;
	}

	/* Update pointers to bypass the node to delete */
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;

	free(ptr);
	return (1);
}
