#include <stdio.h>

/**
 * main - Entry point
 *
 * this program output the aphabet letter in lower caset
 *
 * Return: Always 0 (Succeed)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
