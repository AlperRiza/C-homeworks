#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, sum;
	sum = 0;
	
	for(i=1000; i<2000; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\n", i);
			sum += i;
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
