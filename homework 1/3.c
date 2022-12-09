#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	
	printf("input a number\n");
	scanf("%d",&N);
	
	if(N%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
