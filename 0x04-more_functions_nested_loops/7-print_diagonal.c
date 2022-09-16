#include "main.h"

/**
 * _isupper - Check if a character is in uppercase
 *
 * @n: Number of '\' to print
 *
 * Return: No return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
