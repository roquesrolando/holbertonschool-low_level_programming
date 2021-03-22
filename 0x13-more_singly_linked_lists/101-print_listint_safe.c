#include "lists.h"

/**
 * print_listint_safe - prints linked list
 * @head: linked list
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *array[1024];
	int j = 0, i = 0, nodes = 0;

	while (head)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == head)
			{
				return (nodes);
			}
		}
		array[i] = head;
		printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
		nodes++;
		i++;
	}
	return (nodes);
}
