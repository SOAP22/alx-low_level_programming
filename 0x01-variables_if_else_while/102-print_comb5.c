#include <stdio.h>
/**
 * main - Entry point
 *
 * This program print to the standard output combinaison of
 * decimal digit and this combinaison have lenght 5
*
 * Return: Always 0 (Succeed)
*/
int main(void)
{
	int i, j, k, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = j + 1;
			for (k = i; k <= 9; k++)
			{
				while (m <= 9)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + m);
					if ((i + j ) == 17 && (k + m) == 18)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					m++;
				}
				m = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
