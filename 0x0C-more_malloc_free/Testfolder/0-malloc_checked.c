#include "main.h"
#include <stdlib.h>



void *malloc_checked(unsigned int b)
{
	void *mc;

	mc = malloc(b);
	if (mc == NULL)
	{
		exit (98);
	}
	return (mc);
}
