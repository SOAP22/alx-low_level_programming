#include <stdio.h>

int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
void print_to_98(int);
int _abs(int);

int main(void)
{
	int r = 0;
	
	r = print_last_digit(98);
	printf("%d\n", r);
	printf("\n");
	printf("\n");
	
	jack_bauer();

	printf("\n\n9-times-table\n");
	times_table();
	printf("\n\n 11-print_to_98\n");
    	print_to_98(0);
    	print_to_98(98);
    	print_to_98(100);
	print_to_98(-10);
	printf("\n\n6-abs\n");
	r = _abs(-13);
	printf("%d", r);
}

int _abs(int n)
{
        if (n > 0)
                return (n);
        else if (n == 0)
                return (0);
        else
                return ((-1) * n);
}

void jack_bauer(void)
{
        int i, k, j, l;

        for (i = 0; i <= 2; i++)
        {
                for (j = 0; j <= 9; j++)
                {
                        for (k = 0; k <= 5; k++)
                        {
                                for (l = 0; l <= 9; l++)
                                {
                                        	putchar('0' + i);
                                            	putchar('0' + j);
                                            	putchar(':');
                                            	putchar('0' + k);
                                            	putchar('0' + l);
                                            	putchar('\n');
                                }
                        }
			if (i == 2 && j == 3)
				break;
                }
        }
}

int print_last_digit(int a)
{
        int r;

        r = a % 10;
        if (r < 0)
        {
                putchar('0' + (-r));
                return ((-r));
        }
        else
        {
                putchar('0' + r);
                return (r);
        }
}

void times_table(void)
{
        int i, j, r, q;

        for (i = 0; i < 10; i++)
        {
                for (j = 0;j <= 9; j++)
                {
                        q = (i * j) / 10;
                        r = (i * j) % 10;
                        if ((i * j) < 10)
                        {
                                putchar('0' + r);
                        }
                        else
                        {
                                putchar('0' + q);
                                putchar('0' + r);
                        }

                        if (j == 9)
                        {
                                putchar('\n');
                        }
                        else
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
        }
}

void print_to_98(int a)
{
        int i;

        if (a >= 98)
        {
                for (i = a; i >= 98; i--)
                {
                        if (i == 98)
                        {
                                printf("%i\n", i);
                        }
                        else
                        {
                                printf("%i, ", i);
                        }
                }
        }
        else
        {
                for (i = a; i <= 98; i++)
                {
                        if (i == 98)
                        {
                                printf("%i\n", i);
                        }
                        else
                        {
                                printf("%i, ", i);
                        }
                }
        }
}
