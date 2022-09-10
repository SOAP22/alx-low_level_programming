#include <stdio.h>

/**
 * main - Entry point
 *
 * this program output the base 10 digit 
 *
 * Return - Always 0 (Succeed)
 */
int main(void)
{
        int i;
        for(i = 0; i < 10; i++)
        {
                putchar('0' + i);
        }
        putchar('\n');
        return (0);
}
