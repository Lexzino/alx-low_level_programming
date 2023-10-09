#include "main.h"
#include <stdlib.h>


/**
  * string_nconcat - ...
  * @s1: ...
  * @s2: ...
  * @n: ...
  * Return: ...
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[a])
	a++;
	while (s2[c])
	c++;
	if (n >= c)
	d = a + c;
	else
	d = a + n;
	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
	return (NULL);
	c = 0;
	while (b < d)
	{
	if (b <= a)
	str[b] = s1[b];
	if (b >= a)
	{
	str[b] = s2[c];
	c++;
	}
	b++;
	}
	str[b] = '\0';
	return (str);
}
