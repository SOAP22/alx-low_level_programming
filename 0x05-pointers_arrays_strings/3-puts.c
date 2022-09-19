#include "main.h"

/**
 * _puts - Print a string
 *
 * @str: Copy of the conta8ner of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
