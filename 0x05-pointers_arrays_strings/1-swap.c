#include "main.h"

/**
 * swap_int - Put the value of a in b and b in a
 *
 * @a: first param
 * @b: second param
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a + *b;
	*a = n - *a;
	*b = n - *b;
}
