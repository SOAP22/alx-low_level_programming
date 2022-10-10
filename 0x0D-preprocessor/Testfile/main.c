#include "0-object_like_macro.h"
#include "1-pi.h"
#include "3-function_like_macro.h"
#include "4-sum.h"
#include <stdio.h>

int main()
{
	int test;
	float cir;
	float ray;

	test = 98 + SIZE;
	printf("%d\n", test);

	ray = -98;
	cir = PI * ABS(ray) * ABS(ray);
	printf("%.1f\n", ABS(ray));
	printf("%.3f\n", SUM(test, cir));
	printf("%.3f\n", cir);

	return (0);
}
