#include <stdio.h>

/**
 * main - Entry point
 *
 * this program output the aphabet letter in lower caset
 *
 * Return - Always 0 (Succeed)
 */
int main(void)
{
	char alpha [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;
	for(i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar("\n");
	return (0);
}
