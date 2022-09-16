#include "main.h"

/**
 * print_most_numbers - Display number from 0 to 9 without 2 and 4
 *
 * Return: No return
 */
void print_most_numbers(void)
{
	int i = -1;

	while (i <= 9)
	{
		if ( i == 2 || i == 4)
			continue;
		i++;
		_putchar('0' + i);
	}
	-putchar('\n');
}
