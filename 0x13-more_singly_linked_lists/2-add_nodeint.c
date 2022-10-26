#include "lists.h"

/**
  * add_nodeint - function to add node at the start
  * @head: pointer to head of list
  * @n: element in the list
  *
  * Return: address of the new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
