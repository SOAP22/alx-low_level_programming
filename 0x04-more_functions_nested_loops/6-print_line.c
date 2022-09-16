#include "main.h"

/**
 * print_line - Displaying the underscore character
 *
 * @n: the number of "_" to print
 *
 * Return: No return
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
