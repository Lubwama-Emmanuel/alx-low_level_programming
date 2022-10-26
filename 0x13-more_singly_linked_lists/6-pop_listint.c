#include "lists.h"

/**
  * pop_listint - function that pops up the head in the list
  * @head: head of the lsit
  *
  * Return: return the popped head data
  */

int pop_listint(listint_t **head)
{
	int nhode;
	listint_t *h;
	listint_t *curr;

	if (head == NULL)
		return (0);

	curr = *head;

	nhode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (nhode);
}
