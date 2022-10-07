#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
/*	int *i;
	char *c;
	float *f;
	double *d;*/
	char *mot;
	printf("Test of the function that allocate memory dynamicly\n\n");
/*	i = malloc_checked(sizeof(int)*10);
	printf("%p\n", (void *)i);
	c = malloc_checked(sizeof(char)*10);
	printf("%p\n", (void *)c);
	f = malloc_checked(sizeof(float)*10);
	printf("%p\n", (void *)f);
	d = malloc_checked(sizeof(double)*10);
	printf("%p\n", (void *)d);*/
	printf("Now we would do the test of our concatenate function\n");
	mot = string_nconcat("Best ", "School !!!", 9);
	printf("%s\n", mot);
	mot = string_nconcat("Best ", "School !!!", 12);
	printf("%s\n", mot);
	mot = string_nconcat("Best ", NULL,1);
	printf("%s\n", mot);
/*	free(i);
	free(c);
	free(f);
	free(d);*/
	return (0);
}
