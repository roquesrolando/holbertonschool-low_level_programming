#include "lists.h"

/**
 * add_nodeint_end - add nodes to link list
 * @head: the address
 * @n: the int
 *
 * Return: node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *hold = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (hold->next != NULL)
		hold = hold->next;

	hold->next = new;

	return (new);
}
