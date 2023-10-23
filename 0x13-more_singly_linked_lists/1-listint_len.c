#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * listint_len - a function that returns the number of
 * elements in a listint_t list
 * @h: pointer to head
 * Return: number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
	temp = temp->next;
	a++;
	}
	return (a);
}
