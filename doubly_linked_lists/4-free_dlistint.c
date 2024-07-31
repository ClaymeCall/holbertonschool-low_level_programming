#include "lists.h"

/**
 * free_dlistint - Frees all the nodes of a list
 * @head: Pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_ptr;

	while (head != NULL)
	{
		tmp_ptr = head;
		head = head->next;

		/* free the value inside n */
		free(tmp_ptr);
	}
}
