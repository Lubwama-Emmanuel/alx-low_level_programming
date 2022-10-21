#include "main.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list
 *
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		if (h-> == NULL)
			printf("%d %s\n", 0, "(nil)");
		else
			printf("%d %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	return (length);
}
