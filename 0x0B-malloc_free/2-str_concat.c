#include "main.h"
#include <stdlib.h>


/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int b, ai;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	b = ai = 0;
	while (s1[b] != '\0')
	b++;
	while (s2[ai] != '\0')
	ai++;
	conct = malloc(sizeof(char) * (b + ai + 1));
	if (conct == NULL)
	return (NULL);
	b = ai = 0;
	while (s1[b] != '\0')
	{
	conct[b] = s1[b];
	b++;
	}
	while (s2[ai] != '\0')
	{
	conct[b] = s2[ai];
	b++, ai++;
	}
	conct[b] = '\0';
	return (conct);
}
