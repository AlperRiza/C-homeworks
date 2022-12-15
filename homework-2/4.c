#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, sum = 0;
	
	for(i=0; i<50; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	
	return 0;
}
