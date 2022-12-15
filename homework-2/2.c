#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	printf("input a b and c for ax^2+bx+c quadratic equation\n");
	
	int a, b, c, d, e, f;
	
	scanf("%d%d%d", &a, &b, &c);
	
	d = b*b - 4 * a * c;
	if(d >= 0)
	{
		e = (-b + sqrt(d)) / (2 * a);
		f = (-b - sqrt(d)) / (2 * a);
		printf("%d %d", e, f);
	}
	else
	{
		printf("there is no real root");
	}
	
	return 0;
}
