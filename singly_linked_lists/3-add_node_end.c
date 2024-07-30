#include "lists.h"

/**
 *add_node_end - Adds a node at the end of a list_t list.
 *@head: Double pointer to the first node.
 *@str: String to be duplicated in the new node.
 *
 *Return: The address of the new node or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int str_len = 0;
	list_t *node = malloc(sizeof(list_t));
	list_t *ptr;

	if (node == NULL)
		return (NULL);

	/* Calculating str_len */
	while (str[str_len])
		str_len++;

	/* Writing in the node */
	node->str = strdup(str);
	node->len = str_len;
	node->next = NULL;

	/* Handling strdup fail */
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}


	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	 ptr = *head;

	/* Pointing to the tail of the list */
	while (ptr->next != NULL)
		ptr = ptr->next;

	/* Adding the new node at the end of the list */
	ptr->next = node;
	return (node);

}
