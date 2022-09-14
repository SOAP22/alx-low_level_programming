#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Return: Void
 */
void print_to_98(int a)
{
	if (a >= 98)
	{
		for( i = a; i >= 98; i--)
		{
			printf("%i", i);
			if (i == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for( i = 0; i <= 98; i++)
		{
			printf("%i", i);
			if (i == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
 		}
	}
}
