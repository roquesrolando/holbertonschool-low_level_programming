#include "lists.h"

/**
 * print_list - Prints all the nodes
 * @h: the linked list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
