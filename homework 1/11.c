#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, sum, i;
	sum = 0;
	
	printf("Write 10 numbers\n");
	
	for(i=1; i<11; i=i+1)
	{
		scanf("%d", &a);
		sum += a;
	}
	
	printf("%d", sum);
	
	return 0;
}
