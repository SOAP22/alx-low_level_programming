#include "main.h"

/*
 * print_last_digit - Entry point
 *
 * @a : number for printing last digit
 *
 * Return: Last digit
 */
int print_last_digit(int a)
{
	int r;

	r = a % 10;
	if (r < 0)
	{
		_putchar('0' + (-r));
		return ('0' + (-r));
	}
	else
	{
		_putchar('0' + r);
		return (r);
	}
}
