#include "main.h"

/**
 * print_triangle - Display triangle formed with "*"
 *
 * @n: Number of line of '*' to print
 *
 * Return: No return
 */
void print_triangle(int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j > i; j-- )
		{
			_putchar(' ');
		}
		for ( k = 0; k < i; k++)
			_putchar('*');
		_putchar('\n');
	}
}
