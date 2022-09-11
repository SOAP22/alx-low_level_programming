#include <stdio.h>

/**
 * main - Entry point
 *
 * this program output the aphabet letter in lower case
 *
 * without print 'e' and 'q'
 *
 * Return: Always 0 (Succeed)
 */
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 25; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
