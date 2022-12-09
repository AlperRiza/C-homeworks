#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a;
	scanf("%f", &a);
	a = (a-32) * 5 / 9;
	printf("%.2f",a);	
	
	return 0;
}
