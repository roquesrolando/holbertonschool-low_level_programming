#include "lists.h"

/**
 * sum_listint - sum of all data
 * @head: the node
 *
 * Return: return the sum
 */

int sum_listint(listint_t *head)
{
	int num = 0, sum = 0;

	while (head)
	{
		if (head == NULL)
			return (0);

		num = head->n;
		head = head->next;
		sum += num;
	}
	return (sum);
}
