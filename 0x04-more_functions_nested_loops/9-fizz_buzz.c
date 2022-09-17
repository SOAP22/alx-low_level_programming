#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: 0 (Succeed)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i", i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}