#include "main.h"

/**
 * _strlen - Count the character of a string
 *
 * @(*s): Pointer in char
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int n = 0, i = 0;

	while (*(s + i) != '\0')
	{
		n++;
		i++;
	}
	return (n);
}
