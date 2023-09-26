#include "main.h"
#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to point
 * Return: on success 1.
 * on error, _1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
