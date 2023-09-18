#include <stdio.h>


/**
 * main - Print the first 98 Fibonacci numbers, starting with
 * 1 and 2, seperated by a comma followed by a space.
 * Return: Always 0.
 */

int mian(void)

{
	unsigned int a = 1, b = 2, sum;
	int count;

	printf("%u, %u", a, b);

	for (count = 3; count <= 98; count++)
	{
	sum = a + b;
	a = b;
	b = sum;
	printf(", %u", sum);
	}
	printf("\n");
	return (0);
}
