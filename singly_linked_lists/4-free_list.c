#include "lists.h"

/**
 * free_list - Frees all the nodes of a list
 * @head: Pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp_ptr;

	while (head != NULL)
	{
		tmp_ptr = head;
		head = head->next;

		free(tmp_ptr);
	}
}
