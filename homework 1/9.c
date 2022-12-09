#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,i;
	printf("write a low high and division number\n");
	scanf("%d%d%d",&a,&b,&c);
	for(i=a; i<b; i=i+1)
	{
		if(i%c==0)
		{
			printf("%d_",i);	
		}
	}
	
	return 0;
}
