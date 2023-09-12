#include "main.h"


/**
 * Function: print_alphabet_x10
 * ----------------------------
 * Description:
 *   This function prints the lowercase alphabet 10 times, with each alphabet followed
 *   by a new line character.
 *
 * Returns:
 *   void - This function does not return a value.
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
