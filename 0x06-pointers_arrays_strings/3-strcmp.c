#include "main.h"
#include <stdio.h>


/**
 * _strcmp - Compare string values
 * @s1: inpute value
 * @s2: inpute value
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)

{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}
