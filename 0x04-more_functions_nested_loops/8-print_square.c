#include "main.h"

/**
 * print_square - Display a square
 *
 * @size: the size of the square
 *
 * Return: No return
 */
void print_square(int size)
{
	int i = 0, j = 0;

	if(size > 0)
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	else
		_putchar('\n');

}

