#include "lists.h"
/**
 * list_len - Function to return length of singly list
 * @h: singly list
 *
 * Return: returns the length
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
