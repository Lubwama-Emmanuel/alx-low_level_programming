#include "lists.h"

/**
  * free_listint2 - function to free linked list
  * @head: head of the list
  */

void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *temp;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
