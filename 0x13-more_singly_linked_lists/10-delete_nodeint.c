#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node
 * @head: the linked list
 * @idx: index to delete node
 *
 * Return: 1 if succeded or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *hold, *new;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	hold = *head;
	if (idx == 0)
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
		if (count == idx - 1)
		{
			new = hold->next;
			hold->next = new->next;
			free(new);
			return (1);
		}
		hold = hold->next;
		count++;
	}
	if (idx > count)
		return (-1);

	return (-1);
}
