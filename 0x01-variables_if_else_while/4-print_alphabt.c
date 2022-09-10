#include <stdio.h>

/**
 * main - Entry point
 *
 * this program output the aphabet letter in lower case without print 'e' and 'q'
 *
 * Return: Always 0 (Succeed)
 */
int main(void)
{
	char alpha [] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'w', 'z'};
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
