#include "lists.h"

/**
  * listint_len - function that prints number of elements ina list
  *
  * @h: head of the list
  *
  * Return: returns the number of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
