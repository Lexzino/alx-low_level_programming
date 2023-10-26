#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int num;

	num = 0;
	if (!b)
	return (0);
	for (c = 0; b[c] != '\0'; c++)
	{
	if (b[c] != '0' && b[c] != '1')
	return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
	num <<= 1;
	if (b[c] == '1')
	num += 1;
	}
	return (num);
}
