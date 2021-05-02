#include "lists.h"

/**
 * sum_dlistint - sum all nodes
 * @head: head of list
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (sum);
}
