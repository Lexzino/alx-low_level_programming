#include "lists.h"
#include <stdlib.h>


/**
 * add_dnodeint -Top the  new node at the beginning of a dlistint_t list.
 * @head: The pointer to  head of  dlistint_t list.
 * @n: value of the element
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (*head != NULL)
	{
		while (h->prev != NULL)
		h = h->prev
	}
	
	new->next = h;

	if (h != NULL)
	h->prev = new;

	return (new);
}
