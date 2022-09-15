#include "main.h"

/**
 * sign - Entry piint
 *
 * @n : value to check
 *
 * Return: 0 , 1 or -1 about the sign of the number
 */
int sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
                return (-1);
	}
	else
	{
		_putchar('0');
                return (0);
	}
}
