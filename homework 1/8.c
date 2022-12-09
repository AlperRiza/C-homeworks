#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, i, sum;
	sum = 0;
	
	printf("input low and high number\n");
	scanf("%d%d",&a,&b);
	
	for(i=a; i<=b; i=i+1)
	{
		sum+=i;
	}
	printf("%d",sum);
	
	return 0;
}
