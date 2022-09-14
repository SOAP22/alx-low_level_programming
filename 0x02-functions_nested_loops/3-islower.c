#include <stdlib.h>
#include "main.h"

/**
 * -islower - Entry pount
 *
 * Return: 0 or 1  According to the statut
 */
int _islower(char c)
{
	int ca = c;

        if (ca >= 97 && ca <= 122)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
