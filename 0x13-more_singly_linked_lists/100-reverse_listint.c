#include "lists.h"

/**
 * reverse_listint - reverse a string
 * @head: the string
 *
 * Return: reversed string
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL, *hold = NULL;

	while (*head)
	{
		new = *head;
		*head = (*head)->next;
		new->next = hold;
		hold = new;
	}
	*head = new;
	return (*head);
}
