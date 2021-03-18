#include "lists.h"

/**
 * print_list - Prints all the nodes
 * @h: the linked list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		nodes++;
	}

	return (nodes);
}
