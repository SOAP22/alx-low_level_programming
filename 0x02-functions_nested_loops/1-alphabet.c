#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: No return
 */
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z';)
	{
		_putchar(c);
	}
	_putchar('\n');
}
