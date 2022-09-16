#include "main.h"

/**
 * more_numbers - Display 10 times numbers drom 0 to 14
 *
 * Return: No return
 */
void more_numbers(void)
{
	int r, q;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		while (j < 15)
		{
			if (j < 10)
			{
				r = j % 10;
				_putchar('0' + r);
			}
			else
			{
				r = j % 10;
				q = j / 10;
				_putchar('0' + q);
				_putchar('0' + r);
			}
		}
		_putchar('\n');
	}
}
