#include "lists.h"

/**
 *sum_dlistint - Sums the data of all nodes in a list.
 *@head: Pointer to the head of the list.
 *
 *Return: The sum, as int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
