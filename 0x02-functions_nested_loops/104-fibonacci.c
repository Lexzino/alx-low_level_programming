#include <stdio.h>


/**
 * main - Print the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0.
 */

int mian(void)
{
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int next;
	int i;
	
	printf("%lu, ", term1);
	for (i = 1 ; i < 98 ; i++)
	{
	printf("%lu", term2);
	next = term1 + term2;
	term1 = term2;
	term2 = next;
	if (i != 97)
	printf(", ");
	}
	printf("\n");
	return (0);
}
