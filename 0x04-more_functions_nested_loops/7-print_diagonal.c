#include "main.h"

/**
 * print_diagonal - Display diagonal line
 *
 * @n: Number of '\' to print
 *
 * Return: No return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			for (j = i; j > 0; j--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
