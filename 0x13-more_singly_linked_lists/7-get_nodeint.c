#include "lists.h"

/**
 * get_nodeint_at_index - get nth node
 * @head: linked list
 * @index: nth
 *
 * Return: nth of nodes
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
