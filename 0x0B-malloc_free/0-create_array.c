#include "main.h"
#include <stdlib.h>


/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);
	for (a = 0; a < size; a++)
	str[a] = c;
	return (str);
}
