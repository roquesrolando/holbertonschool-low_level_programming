#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * of a linked list
 * @head: The head of the linked list
 * @n: The number to place in the new node
 *
 * Return: The new head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	return (new);
}
