#include "lists.h"

/**
 * get_dnodeint_at_index - return a node
 * @head: head of list
 * @index: node to return
 *
 * Return: wanted node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ittr = 0;

	if (head == NULL)
		return (NULL);

	while (ittr < index)
	{
		if (head == NULL)
			return (NULL);
		ittr++;
		head = head->next;
	}
	return (head);
}
