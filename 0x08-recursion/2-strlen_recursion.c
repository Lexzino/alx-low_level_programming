#include "main.h"


/**
 * _strlen_recursion - Prints the length of a string
 * @s: the lenght of string
 * Return: value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
