#include "lists.h"

/**
  * free_dlistint - Free a linked list
  * @head: The head of linked list
  *
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
