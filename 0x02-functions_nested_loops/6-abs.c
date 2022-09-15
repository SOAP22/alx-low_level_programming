#include "main.h"

/**
 * _abs - Entry point
 *
 * @n : value for printing abs
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return ((-1) * n);
}
