#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	srand(time(NULL));
	for (i = 0; i < 13; i++)
		printf("%c", rand() % 256);
	return (0);
}
