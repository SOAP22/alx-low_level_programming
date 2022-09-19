#include "main.h"

/**
 * rev_string - Reverse string
 *
 * @s: sring to reverse
 */
void rev_string(char *s)
{
	int l = 0;
	int i, j = 0;
	char temp;

	while (*(s + l) != '\0')
		l++;

	for (i = l - 1; i <= 0; i--)
	{
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		j++;
	}
}
