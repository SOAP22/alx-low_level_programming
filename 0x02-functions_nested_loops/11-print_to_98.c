#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Return: Void
 */
void print_to_98(int a)
{
	int i;

	if (a >= 98)
	{
		for(i = a; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%i\n", i);
			}
			else
			{
				printf("%i, ", i);
			}
		}
	}
	else
	{
		for(i = 0; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%i\n", i);
			}
			else
			{
				printf("%i, ", i);
			}
 		}
	}
}
