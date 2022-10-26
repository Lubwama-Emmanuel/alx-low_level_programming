#include "lists.h"
/**
  * sum_listint - function that sum of elements in a list
  *
  * @head: head to list
  *
  * Return: returns the sum
  */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
		return (0);

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
