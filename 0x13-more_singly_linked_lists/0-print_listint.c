#include "lists.h"

/**
  * print_listint - function that prints elemnts of the list
  *
  * @h: pointer to head
  * Return: return number of length of elements
  */
size_t print_listint(const listint_t *h)
{
	size_t len;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}

