#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Nothing.
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
			if ( i == 2 && j == 3)
				break;
		}
	}
}
