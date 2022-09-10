#include <stdio.h>

/**
 * main - Entry point
 *
 * this program prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Succeed)
 */
int main(void)
{
	char alpha [] = "zyxwvutsrqponmlkjihgfedcba"
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
