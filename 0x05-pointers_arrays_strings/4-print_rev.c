#include "main.h"

/**
 * print_rev - Print reverse of string
 *
 * @*s: String to reverse
 *
 */
void print_rev(char *s)
{
	int length = _strlen(s);

	for (i = length - 1; i <= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
