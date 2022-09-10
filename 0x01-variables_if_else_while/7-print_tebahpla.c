#include <stdio.h>

/**
 * main - Entry point
 *
 * this program prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Succeed)
 */
int main(void)
{
        char alpha [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'z'};
        int i;
        for(i = 25; i >= 0; i--)
        {
                putchar(alpha[i]);
        }
        putchar('\n');
        return (0);
}
