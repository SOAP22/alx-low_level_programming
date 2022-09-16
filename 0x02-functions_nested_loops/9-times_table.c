#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, r, q;

	for (i = 0; i < 10; i++)
	{
		for (j = 0;j <= 9; j++)
		{
			q = (i * j) / 10;
			r = (i * j) % 10;
			if ((i * j) < 10)
			{
				_putchar('0' + r);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + q);
				_putchar('0' + r);
				_putchar(',');
			}

			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
