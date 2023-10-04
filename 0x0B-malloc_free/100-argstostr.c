#include "main.h"
#include <stdlib.h>


/**		
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{	
	int i, j, e = 0, m = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	m++;
	}
	m += ac;
	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{	
	str[e] = av[i][j];
	e++;
	}
	if (str[e] == '\0')
	{
	str[e++] = '\n';
	}
	}
	return (str);
}
