#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to the first element
 * @n: integer
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
