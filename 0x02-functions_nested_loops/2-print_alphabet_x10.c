#include "main.h"

/**
 * pint_alphabet_x10 - Entry point
 *
 * Return: No return
 */
void prin_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 10; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
