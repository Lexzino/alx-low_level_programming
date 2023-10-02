#include "main.h"


/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int f = 0;
	int e = 0;

	while (*(src + f) != '\0')
	{
	f++;
	}
	for ( ; e < f ; e++)
	{
	dest[e] = src[e];
	}
	dest[f] = '\0';
	return (dest);
}
