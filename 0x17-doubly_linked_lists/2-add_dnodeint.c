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
	new->prev = NULL;
	new->next = *head;
	*head = new;

	if (*head)
	{
		(*head)->prev = new;
	}
	return (new);
}
