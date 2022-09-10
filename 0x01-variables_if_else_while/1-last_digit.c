#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * the program assign a random value to <n> 
 * and then displays the last digit 
 *
 * Return - Always 0 (Succeed)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);

	return (0);
}
