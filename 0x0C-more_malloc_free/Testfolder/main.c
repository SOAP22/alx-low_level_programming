#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int *i;
	char *c;
	float *f;
	double *d;
	char *mot;
	char *a;
	int *arr;
	int j = 0;

	printf("Test of the function that allocate memory dynamicly\n\n");
	i = malloc_checked(sizeof(int)*10);
	printf("\t\t%p\n", (void *)i);
	c = malloc_checked(sizeof(char)*10);
	printf("\t\t%p\n", (void *)c);
	f = malloc_checked(sizeof(float)*10);
	printf("\t\t%p\n", (void *)f);
	d = malloc_checked(sizeof(double)*10);
	printf("\t\t%p\n\n", (void *)d);
	free(i);
	free(c);
	free(f);
	free(d);

	printf("Now we would do the test of our concatenate function\n");
        mot = string_nconcat("Best ", "School !!!", 9);
        printf("\t\t%s\n", mot);
        mot = string_nconcat(NULL, NULL, 1);
        printf("\t\t%s\n", mot);
        mot = string_nconcat(NULL, "School !!!", 6);
        printf("\t\t%s\n\n", mot);

	printf("Test of the third function _calloc\n");
        a = _calloc(3,sizeof(char));
        printf("\t\t%d %d %d\n\n", *a, a[1], a[2]);
	free(a);

	printf("Test of the fourth function\n\t\t");
	arr = array_range(0, 10);
	while (j < (10 - 0 +1))
		printf("%d ", arr[j++]);
	printf("\n\n");

	return (0);
}
