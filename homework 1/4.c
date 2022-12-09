#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	
	printf("input a number\n");
	scanf("%d",&N);
	
	if(N>0)
	{
		printf("above");
	}
	else if(N==0)
	{
		printf("equal");
	}
	else
	{
		printf("less");
	}
	return 0;
}
