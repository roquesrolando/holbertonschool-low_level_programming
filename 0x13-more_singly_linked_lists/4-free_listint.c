#include "lists.h"

/**
  * free_listint - Frees a linked list
  * @head: The head
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}

	free(head);
}
