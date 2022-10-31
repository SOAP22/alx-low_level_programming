#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	//unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	else
	{
		m = malloc(nmemb * size);
		if (m == NULL)
			return (NULL);
		/*else
			while (i < nmemb)
			{
				m[i] = 0;
				i++;
			}*/
	}

	return (m);
}
