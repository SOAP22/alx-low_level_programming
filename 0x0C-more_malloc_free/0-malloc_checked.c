#include "main.h"
#include <stdio.h>

/**
 * @b - size of the allocated memory
 * Return : A pointer to the first adresse
 */

void *malloc_checked(unsigned int b)
{
	void *mc;

	mc = malloc(b);
	if (mc == NULL)
	{
		exit(98);
	}
	return (mc);
}
