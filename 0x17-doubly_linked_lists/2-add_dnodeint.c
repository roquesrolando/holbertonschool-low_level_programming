#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning
  * @head: The head of the linked list
  * @n: The number to place in the new node
  *
  * Return: The new head
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head)
	{
		new->next = *head;
		new->prev = (*head)->prev;
		(*head)->prev = new;
		*head = new;
		return (*head);
	}

	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
