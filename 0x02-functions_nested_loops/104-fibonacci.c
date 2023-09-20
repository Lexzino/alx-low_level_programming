#include <stdio.h>


/**
 *main - Prints the first 98 Fibonacci numbers
 *Return: 0.
 */

int main(void)
{
	int n1 = 0, n2 = 1, n3, count, num;

	printf("Prints the first two Fibonacci numbers");
	scanf("%d", &num);

	printf("\n%d\n%d\n", n1, n2);

	for (count = 3; count <= num; count++)
	{
	n3 = n1 + n2;
	printf("%d\n", n3);
	n1 = n2;
	n2 = n3;
	}
	return (0);
}
