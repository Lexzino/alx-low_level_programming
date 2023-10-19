#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * print_list - a function that prints all the elements
 * of a list_t list
 * @h: pointer to a struct list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
	if (temp->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", temp->len, temp->str);
	temp = temp->next;
	a++;
	}
	return (a);
}
