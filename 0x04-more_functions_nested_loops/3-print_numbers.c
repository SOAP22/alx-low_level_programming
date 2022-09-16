#include "main.h"

/**
 * print_numbers - Display number from 0 to 9
 *
 * Return: No return
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
