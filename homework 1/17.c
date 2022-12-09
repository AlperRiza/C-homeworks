#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sum, i, n;
	sum = 0;
	
	scanf("%f", &n);
	
	for(i=2; i<n; i+=2)
	{
		sum += 1 / i;
	}
	printf("\n%f", sum);
	
	return 0;
}
