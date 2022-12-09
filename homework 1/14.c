#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, carpim;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		carpim *= i;
	}
	printf("%d", carpim);
	
	return 0;
}
