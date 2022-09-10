#include <stdio.h>

/**
 * main - Entry point
 *
 * this program output the aphabet letter in lower case follow by letter in upper case
 *
 * Return: Always 0 (Succeed)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char Alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(Alpha[i]);
	}
	putchar('\n');
	return (0);
}
