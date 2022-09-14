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
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					if ((i == 2 && j == 3) && (k == 5 && l == 9))
					{
						break;
					}
				}
			}
		}
	}
}
