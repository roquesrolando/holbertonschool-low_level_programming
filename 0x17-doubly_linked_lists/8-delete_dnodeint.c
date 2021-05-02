#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node
 * @head: the linked list
 * @index: index to delete node
 *
 * Return: 1 if succeded or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold, *new;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	hold = *head;
	if (index == 0)
	{
		if (*head == NULL)
		{
			return (-1);
		}
		*head = (*head)->next;
		free(hold);
		return (1);
	}
	while (hold)
	{
		if (count == index - 1)
		{
			new = hold->next;
			hold->next = new->next;
			free(new);
			return (1);
		}
		hold = hold->next;
		count++;
	}
	if (index > count)
		return (-1);

	return (-1);
}
