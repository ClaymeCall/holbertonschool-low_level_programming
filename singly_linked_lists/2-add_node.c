#include "lists.h"

/**
 *add_node - Adds a node at the beginning of a list_t list.
 *@head: Double pointer to the first node.
 *@str: String to be duplicated in the new node.
 *
 *Return: The address of the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int str_len = 0;

	/* Allocate memory for the new node */
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	/* Calculate str_len */
	if (str == NULL)
		str_len = 0;
	else
		while (str[str_len])
			str_len++;

	/* Write in the new node */
	node->str = strdup(str);
	node->len = str_len;

	/* Error handling if strdup failed */
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	/* Changing the head to be the newly created node */
	node->next = *head;
	*head = node;

	return (node);
}
