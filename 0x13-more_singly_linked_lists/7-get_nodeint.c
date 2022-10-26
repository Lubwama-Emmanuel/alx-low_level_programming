#include "lists.h"

/**
  * get_nodeint_at_index - gets the nth node in a list
  *
  * @head: head of the function
  * @index: nth node number
  *
  * Return: returns nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
